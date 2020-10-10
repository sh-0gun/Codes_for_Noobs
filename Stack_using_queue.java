import java.util.*;
public class Stack_using_queue {
    static class Stack{
        static Queue<Integer> q1=new LinkedList<Integer>();
        static Queue<Integer> q2=new LinkedList<Integer>();
        static int curr_size;
        Stack(){
            curr_size=0;
        }
        public static void push(int x){
            while(!q1.isEmpty()){
            int temp=q1.remove();
            q2.add(temp);
        }
            q1.add(x);
            while(!q2.isEmpty()){
                int temp=q2.remove();
                q1.add(temp);
            }
            curr_size++;
        }
        public static void pop(){
            q1.remove();
            curr_size--; 
        }
        public static int top(){
            int t=q1.peek();
            return t;
        }
        public static int size(){
            
            return curr_size;
        }
        
    }
    public static void main(String args[]){
        Stack s=new Stack();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        System.out.println(s.size());
        s.pop();
        System.out.println(s.top());
        
    }
}
