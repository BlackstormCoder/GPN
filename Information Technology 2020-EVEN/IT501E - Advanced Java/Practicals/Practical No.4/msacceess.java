import java.sql.*;
public class msacceess {
    public static void main(String args[]){
    
            try{ 
				
				Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
		
                String url = "jdbc:ucanaccess://C:/Users/manda/Desktop/Database1.accdb";
            	Connection con = DriverManager.getConnection(url);
            
            	Statement st = con.createStatement();
            
            	String tableName = "myTable" + String.valueOf((int)(Math.random() * 1000.0));
		String createTable = "CREATE TABLE" + tableName + "(id Integer, name Text(32))";

		st.execute(createTable);
            	st.close();
            	con.close();
            }catch(Exception e){
                System.out.println(e.getMessage());
            }
    }    
}
