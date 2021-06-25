import java.util.*;
public class tony
{
    public static void main(String args[])
    {
        Scanner br=new Scanner(System.in);
        int T=br.nextInt();
        while(T>0)
        {
            int gifts=0;
            int N=br.nextInt();
            int SF[]=new int[N];
            for(int i=0;i<N;i++)
            {
              SF[i]=br.nextInt();  
            }
            int k=br.nextInt();
            Arrays.sort(SF);
            for(int i=0;i<k;i++)
            {
                gifts=gifts+SF[i];
            }
            System.out.println(gifts);
            T--;
        }
    }
}