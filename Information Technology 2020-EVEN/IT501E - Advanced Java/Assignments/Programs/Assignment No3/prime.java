import java.rmi.*;
public interface prime extends Remote 
{
    public String prime(int n) throws RemoteException ;
}