import java.net.*;
import java.io.*;
class Client{
public static void main(String args[])throws Exception{
Socket s=new Socket("localhost",1111);
DataInputStream din=new DataInputStream(s.getInputStream());
DataOutputStream dout=new
DataOutputStream(s.getOutputStream());
BufferedReader br=new BufferedReader(new
InputStreamReader(System.in));

String str="", str1="";
while(!str.equals("stop")){
str=br.readLine();
dout.writeUTF(str);
dout.flush();
str1=din.readUTF(); 
System.out.println("Server - "+ str1);
}

dout.close();
s.close();
}} 