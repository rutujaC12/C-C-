public class MultiThread{
    public static void main(String[] args) {

        Thread thread1 = new Thread(new MyRunnable("Thread 1"));
        Thread thread2 = new Thread(new MyRunnable("Thread 2"));
        Thread thread3 = new Thread(new MyRunnable("Thread 3"));

        thread1.start();
        thread2.start();
        thread3.start();
    }

    static class MyRunnable implements Runnable {
        private String threadName;

        public MyRunnable(String name) {
            this.threadName = name;
        }

        @Override
        public void run() {
            for (int i = 1; i <= 5; i++) {
                System.out.println(threadName + " - Count: " + i);

                try {
                    Thread.sleep((long) (Math.random() * 1000));
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println(threadName + " has finished.");
        }
    }
}
