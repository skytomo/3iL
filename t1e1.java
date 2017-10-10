public class t1e1 {
	public static void main(String[] args) {
		List l = new List();
		l.a=1;
		l.b=2;
		System.out.println("a:"+Integer.toString(l.a)+" b:"+Integer.toString(l.b));
		l.swap();
		System.out.println("a:"+Integer.toString(l.a)+" b:"+Integer.toString(l.b));
	}
	
	static void swap(int a, int b) {
		int temp;
		temp=a;
		a=b;
		b=temp;
		System.out.println("a:"+Integer.toString(a)+" b:"+Integer.toString(b));
	}
}

class List {
	int a, b;
	void swap() {
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
}
