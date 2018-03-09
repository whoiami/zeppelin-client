import java.util.TreeMap;
import java.util.Map;
import net.qihoo.zeppelin.Zeppelin;
import net.qihoo.zeppelin.ZeppelinException;

public class TestZeppelinThreadSet extends Thread {
  int pauseTime;
  public TestZeppelinThreadSet(int pTime) {
    this.pauseTime = pTime;
  }


  public void run() {
    while (true) {
      this.doIt();
      try {
        Thread.sleep(pauseTime * 100);
      } catch (Exception e) {
        e.printStackTrace();      
      }
    }
  }

  public void doIt() {
    try {
      Zeppelin test = new Zeppelin("127.0.0.1", "9221", "table1");
      test.set("key1", "value1");
      test.removeZeppelin();
    } catch(ZeppelinException e) {
      e.printStackTrace();
    }
  }

  public static void main(String[] args) {
    for (int i = 1; i <= 100; i++) {
      TestZeppelinThreadSet tqt = new TestZeppelinThreadSet(i);
      tqt.start();
    }
  }

}


