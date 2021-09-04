import java.sql.*;
public class StarWars {
    public static void main(String args[]){
    
            try{
                String url = "jdbc:ucanaccess:C:/Users/manda/Desktop/Database.accdb";
            Connection con = DriverManager.getConnection(url);
            
            Statement st = con.createStatement();
            
            ResultSet rs = st.executeQuery("Select * from table");
            
            while(rs.next()){
                System.out.println(rs.getString(1));
            }
            
            con.close();
            }catch(Exception e){
                System.out.println(e.getMessage());
            }
    }    
}
