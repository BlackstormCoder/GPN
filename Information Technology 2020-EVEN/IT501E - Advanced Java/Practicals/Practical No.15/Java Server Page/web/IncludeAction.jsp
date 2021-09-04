<%-- 
    Document   : IncludeAction
    Created on : 26 Jun, 2021, 5:24:16 PM
    Author     : BHT-TK-001
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<body>

<H1 ALIGN="center">A Sample Order Form</H1>
<%! 
    int Sr_No[] = {1,2,3,4,5,6,7,8,9};
    String Episode_No[] = {"I","II","III","VI","V","VI","VII","VIII","IX"};
    String Movie_Name[] = {"A Phantom Menace","Attack of the Clones","Revenge of the Sith","A New Hope","The Empire Strikes Back","The Return of the Jedi","The Force Awakens","The Last Jedi","The Rise of Skywalker"};
    int Release_Date[] = {1999,2002,2005,1977,1980,1983,2015,2017,2019};
%>
<TABLE ALIGN="center" BGCOLOR="lightgray" BORDER="1" WIDTH="75%">
<TR><TD>Sr No.</TD>
<TD>Episode no.</TD>
<TD>Movie Name</TD>
<TD>Release Date</TD>
</TR>
<% for (int i=0; i<9; i++) { %> 
      <TR><TD><%= Sr_No[i] %></TD>
      <TD><%= Episode_No[i] %></TD>
      <TD><%= Movie_Name[i] %></TD>
      <TD><%= Release_Date[i] %></TD>
      
<% } //end for loop %>
</TABLE>
</body>
</html>