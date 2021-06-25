import java.util.*;
public class lex
{
    public static void main(String args[])
    {
                int c=0,f=0;
                char x;
              
                 Scanner sc=new Scanner(System.in);
                String st=sc.nextLine();
                st=st.trim();
                
                
                for(char i='a';i<'z';i++)
                {
                                f=0;c=0;
                                for(int j=0;j<st.length();j++)
                                {
                                                x=st.charAt(j);
                                                if(x==i)
                                                {
                                                                f=1;
                                                                c++;
                                                }
                                }
                                if(f==1)
                                System.out.print(""+i+""+c);
                }
    }
}
