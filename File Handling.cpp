#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	 char pc1,pc2,pc3,choice;
	fstream f1;
	f1.open("infile.txt",ios::in);
	ofstream c,p;
	c.open("FResult.txt");
	p.open("Cutting.txt");
	cout<<"\nEnter your choice character (f,m,r,s):-";
	cin>>choice;


	if(choice=='f')
	{
	   while(f1)
	   {
		   f1.get(pc1);
		   if(pc1=='"')
		   {
			  f1.get(pc2);
		      if(pc2=='f')
		      {
		         f1.get(pc3);
		         if(pc3=='"')
		         {

			       c<<pc1;
			       c<<pc2;
			       c<<pc3;
			          f1.get(pc1);
                      c<<pc1;
                      f1.get(pc1);
                      c<<pc1;
			         for( ; ; )
			        {
                      f1.get(pc1);
                      c<<pc1;
                      if(pc1==',')
                      {
						 c<<endl;
						 p<<endl;
						  break;
					  }
					  p<<pc1;
			        }
			       cout<<endl;
			     }
	           }
	        }
		}
     }
     else if(choice=='m')
       {
	   while(f1)
	   {
		   f1.get(pc1);
		   if(pc1=='"')
		   {
			  f1.get(pc2);
		      if(pc2=='m')
		      {
		         f1.get(pc3);
		         if(pc3=='"')
		         {
		           c<<pc1;
			       c<<pc2;
			       c<<pc3;
			          f1.get(pc1);
                      c<<pc1;
                      f1.get(pc1);
                      c<<pc1;
			         for( ; ; )
			        {
                      f1.get(pc1);
                      c<<pc1;
                      if(pc1==',')
                      {
						 c<<endl;
						 p<<endl;
						  break;
					  }
					     p<<pc1;
			        }
			     }
	           }
	        }
		}
     }
     else if(choice=='r')
        {
	   while(f1)
	   {
		   f1.get(pc1);
		   if(pc1=='"')
		   {
			  f1.get(pc2);
		      if(pc2=='r')
		      {
		         f1.get(pc3);
		         if(pc3=='"')
		         {

			       c<<pc1;
			       c<<pc2;
			       c<<pc3;
			          f1.get(pc1);
                      c<<pc1;
                      f1.get(pc1);
                      c<<pc1;
			         for( ; ; )
			        {
                      f1.get(pc1);
                      c<<pc1;
                      if(pc1==',')
                      {
						 c<<endl;
						 p<<endl;
						  break;
					  }
					  p<<pc1;
			        }

			     }
	           }
	        }
		}
     }
     else if(choice=='s')
        {
	   while(f1)
	   {
		   f1.get(pc1);
		   if(pc1=='"')
		   {
			  f1.get(pc2);
		      if(pc2=='s')
		      {
		         f1.get(pc3);
		         if(pc3=='"')
		         {

			       c<<pc1;
			       c<<pc2;
			       c<<pc3;
			       f1.get(pc1);
			       c<<pc1;
			       f1.get(pc1);
			       c<<pc1;
			       f1.get(pc1);
			       c<<pc1;
                   p<<pc1;
			         for( ; ; )
			        {
                      f1.get(pc1);
                      c<<pc1;
                      p<<pc1;
                      if(pc1=='"')
                      {
						 c<<endl;
						 p<<endl;
						  break;
					  }

			        }

			     }
	           }
	        }
		}
     }
    p.close();
    fstream r;
	r.open("Wipe.txt",ios::in|ios::out);
    r.clear();
    r.seekg(0, ios::beg);
    string lang,xyz;
    cout<<"\nEnter any language name:-";
    cin>>lang;

   ofstream s;
	 s.open("final.bat");
     while(getline(r,xyz))
     {
		  s<<lang;
		  s<<xyz<<endl;
	 }
     s.close();
	 c.close();
	 f1.close();
 return 0;
 }
