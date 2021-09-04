import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.server.UnicastRemoteObject;

public class prime_server extends UnicastRemoteObject implements prime{
    public prime_server() throws  RemoteException
    {
       super();
    }
  
     //@Ovverride
     
     public String prime(int n) throws RemoteException {
		int num = n;
		String p = "Noo";
		boolean flag = false;
		for (int i = 2; i <= num / 2; ++i) {
			// condition for nonprime number
			if (num % i == 0) {
				flag = true;
				break;
			}
		}
		if (!flag)
			p="Yes";
		else
			p="No";
		return p;
		}
     
    public static void main(String args[]) throws RemoteException
    {
     try
     {
        Registry reg = LocateRegistry.createRegistry(3333);
        reg.rebind("Hii Server", new prime_server());
        System.out.println("Server Ready!..");
     }
     catch(RemoteException e)
     {
         System.out.println("Exception" +e);
     }
    }
}