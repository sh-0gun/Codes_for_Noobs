import java.util.*;
public class sortstack {
    public static void sortstack(Stack<Integer> s){
        if(!s.isEmpty()){
            int temp=s.pop();
            sortstack(s);
            sortedInsert(s,temp);
            
        }
    }
    public static void sortedInsert(Stack<Integer> s,int element){
        if(s.isEmpty() || element>s.peek()){
            s.push(element);
            return;
        }
        int temp=s.pop();
        sortedInsert(s,element);
        s.push(temp);
    }
    static void printStack(Stack<Integer> s) 
    { 
       ListIterator<Integer> lt = s.listIterator(); 
         
       // forwarding 
       while(lt.hasNext()) 
           lt.next(); 
         
       // printing from top to bottom 
       while(lt.hasPrevious()) 
           System.out.print(lt.previous()+" "); 
    } 
    
    public static void main(String args[]){
       Stack<Integer> s = new Stack<>(); 
        s.push(30); 
        s.push(-5); 
        s.push(18); 
        s.push(14); 
        s.push(-3);
        System.out.println(s);
        sortstack(s);
System.out.println(s);    }
}
