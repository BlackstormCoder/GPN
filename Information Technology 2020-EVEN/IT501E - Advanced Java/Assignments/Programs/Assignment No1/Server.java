import java.net.*;
import java.io.*;
class Server{
public static void main(String args[])throws Exception{
ServerSocket ss=new ServerSocket(1111);
Socket s=ss.accept();
DataInputStream din=new DataInputStream(s.getInputStream());
DataOutputStream dout=new
DataOutputStream(s.getOutputStream());
BufferedReader br=new BufferedReader(new
InputStreamReader(System.in));
 
String str="", str1 ="";
while(!str.equals("stop")){
str=din.readUTF();
System.out.println("Client - "+str);
str1 =br.readLine();
dout.writeUTF(str1);
dout.flush();
}
din.close();
s.close();
ss.close();
}}