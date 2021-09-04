package net.codejava;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

public class execute {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		String url = "jdbc:mysql://localhost:3306/assignment2";
        String username = "blackhat";
        String password = "blackhat";
        
        //Connect to sql server
        Connection con = DriverManager.getConnection(url, username, password);
		System.out.println("Database connected successfully ");
		String querry;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the query");
		querry =sc.nextLine();
		
		//create jdbc statement obj
		Statement st = con.createStatement();
		boolean flag = st.execute(querry);
		
		//gather and process the result
		if(flag == true) // when select sql is executed
		{
			ResultSet rs= st.getResultSet();
			while(rs.next())
			{
				System.out.println(rs.getInt(1)+ " " +rs.getString(2)+" "+ rs.getString(3));
				
			}
			rs.close();
		}//if close
		else//when non-select query is executed
		{
			int rowcount = st.getUpdateCount();
			System.out.println("Number of records affected : "+ rowcount);
		}
		st.close();
		
		
		//close jdbc obj 
		
		
		con.close();
	}

}