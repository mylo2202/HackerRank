import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class QueueUsingTwoStacks {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int noElements = in.nextInt();
        
        Stack<Integer> stack1 = new Stack<Integer>();
        Stack<Integer> stack2 = new Stack<Integer>();
        
        int query;
        
        for (int i = 0 ; i < noElements ; i++) 
        {
            query = in.nextInt();
            
            if (query == 1)
            {
                stack1.push(in.nextInt());
            } 

            if (query == 2)
            {
                if(stack2.isEmpty())
                {
                    while(!stack1.isEmpty())
                    {
                        stack2.push(stack1.pop());
                    }                    
                }
                
                if (!stack2.isEmpty())
                {                                
                    stack2.pop(); 
                }
            }

            if (query == 3)
            {       
                if(stack2.isEmpty())
                {
                    while(!stack1.isEmpty())
                    {
                        stack2.push(stack1.pop());
                    }
                    System.out.println(stack2.peek());
                } 
                else 
                {
                    System.out.println(stack2.peek());
                }
            }
        }
    }
}
