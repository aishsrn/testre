#include <my_global.h>
#include <mysql.h>
#include<stdlib.h>

int main(int argc, char **argv)
{  
  MYSQL *con = mysql_init(NULL);
  char c[50],q1[100],q2[100],id[10]; int ch,h;
  char q[500]="INSERT INTO employee(id,name) SELECT * FROM(SELECT "; 
  char q3[500]="SELECT * FROM employee WHERE NAME='";
  if (con == NULL) 
  {
      fprintf(stderr, "%s\n", mysql_error(con));
      exit(1);
  }

  if (mysql_real_connect(con, "localhost", "root", "inxs", 
          "testdb2", 0, NULL, 0) == NULL) 
  {
      fprintf(stderr, "%s\n", mysql_error(con));
      mysql_close(con);
      exit(1);
  }  
do{
  printf("\nEnter name and id:");
  scanf("%s",c);
  scanf("%s",id);
 
  strcat(id,",'");
  strcpy(q1,q);
  strcpy(q2,q3);
  strcat(q1,id);
  strcat(q1,c);
  strcat(q2,c);
  strcat(q1,"') AS tmp WHERE NOT EXISTS (");
  strcat(q1,q2);
  strcat(q1,"') LIMIT 1");
  if (mysql_query(con,q1)) 
  {
      fprintf(stderr, "%s\n", mysql_error(con));
      mysql_close(con);
      exit(1);
  }
  printf("Changes made");
  
  printf("\nPress 1 to continue and 0 to exit:");
  scanf("%d",&ch);
  }while(ch);
  mysql_close(con);
  exit(0);
}
