package basic;

public class MainFile implements Runnable {
	private static int sum = 0;

	static Object lock1 = new Object();
	static Object lock2 = new Object();
	

	
	public void foo(Object A, Object B) {
		synchronized (A) {
			synchronized (B) {
				for (int i = 0; i < 10000; i++) {
					sum++;
				
				}
			}
		}
	}

	public void bar(Object A, Object B) {
		synchronized (B) {
			synchronized (A) {
				for (int i = 0; i < 10000; i++) {
					sum--;
			
				}
			}
		}
	}

	public int getSum(Object A) {
		synchronized (A) {
			return sum;
		}
	}

	@Override
	public void run() {
		// TODO Auto-generated method stub
		
		for (int x = 0; x < 2; x++) {
			foo(lock1, lock2);
			bar(lock1, lock2);
		}
		System.out.println(getSum(lock1));
	}
}
