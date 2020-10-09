import java.util.Math;

public class A43{

	public static void main(String[] args) {
		float[] arr = new float[15];
		float tmp;
		int i = 0;
		while(i < 15 && tmp > 0){
			java.util.Scanner s = new java.util.Scanner(System.in);
			tmp = s.nextFloat();
			arr[i] = tmp;
			i ++;
		}
		java.util.Scanner s = new java.util.Scanner(System.in);
		String c = s.next();
		switch(c) {
			case 'm': {
				System.out.println(geometricMean(arr, i));
			}
		}

	}

	public static float geometricMean(float[] arr, int num) {

	}

}