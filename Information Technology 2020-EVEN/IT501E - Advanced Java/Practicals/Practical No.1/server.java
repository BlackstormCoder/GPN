import java.net.*;
import java.nio.Buffer;
import java.io.*;

public class server {
    public static void main(String[] args) throws IOException {
        ServerSocket ss = new ServerSocket(4999);
        Socket s = ss.accept();

        DataInputStream din = new DataInputStream(s.getInputStream());
        DataOutputStream dout = new DataOutputStream(s.getOutputStream());
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Client is Connected");
        
        String str = "", str1 = "";
        while (!str.equals("stop")) {
            str = din.readUTF();
            System.out.println("Client: " + str);
            str1 = br.readLine();
            dout.writeUTF(str1);
            dout.flush();
        }
        din.close();
        s.close();
        ss.close();
    }
}