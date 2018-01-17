
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int secs = 0;
		while(true) {
			try {
				Thread.sleep(1000);
				secs++;
				System.out.println(secs + " seconds have elapsed.");
			}
			catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

}
