import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Permutations{
  public static void main(String[] args) {
    try(BufferedReader reader = new BufferedReader(new InputStreamReader(System.in)); PrintWriter out = new PrintWriter(System.out)){
      long n = Long.parseLong(reader.readLine());
      if(n == 2 || n == 3){
        out.print("NO SOLUTION");
        out.flush();
        return;
      } 
      
      for(int i = 2; i <= n; i += 2) out.print(i + " ");
      for(int i = 1; i <= n; i += 2) out.print(i + " ");
      out.flush();
      out.close();
      reader.close();
    }catch(Exception e){}
  }
}