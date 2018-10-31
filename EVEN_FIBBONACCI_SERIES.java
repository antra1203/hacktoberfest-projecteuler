public class EvenFibs {
  public static void main(String[] args) {
		int term1 = 0, term2 =1, i =0, result=0;
		while (term1 <= 4000000) {
			i = term1;
			term1=term2;
			term2 += i;
			
			if (term2%2 == 0) {
				result += term2;
			}
		}
		System.out.println(result);
	}
}
