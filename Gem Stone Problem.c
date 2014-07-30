import java.util.*;
import java.io.*;
import java.lang.*;
class Solution
    {
    public static void main(String args[])throws Exception
        {
        Scanner sc=new Scanner(System.in);
       
        int N;int count=0;int c=0;
         N=sc.nextInt();
         String s[]=new String[N];
         for(int i=0;i<N;i++)
             {
             
             s[i]=sc.next();
         }
       for(int i=97;i<123;i++)
           {count=0;
       for(int j=0;j<s.length;j++)
           {
           char p=(char)i;
           if(s[j].indexOf(p)!=-1)
               count++;
            }
            if(count==N)
                c++;
       }
         
         System.out.println(c); 
    }
}