#include <iostream>
#include <vector>

struct mtx_d{

  int col;
  int row;
  std::vector<double> comps;
  
  mtx_d(){col=0; row=0;};
  
  void init_size(int m, int n){
    col=n; row=m; comps.resize(m*n);
  };

  void get_comp(int i, int j, double x);
  double pull_comp(int i, int j);
  void print(void);
  mtx_d operator + ( mtx_d &A);
  void identity(int n);
  
};

void mtx_d::get_comp(int i, int j, double x){
  comps[col*i+j] = x ;
}

void mtx_d::print(void){
  for (int r = 0; r<row; ++r){
    for (int c = 0; c < col; ++c)
      std::cout<<comps[r*col+c]<<"\t";
    std::cout<<"\n";
  }
}

double mtx_d::pull_comp(int i, int j){
  return comps[col*i+j];
}


mtx_d mtx_d::operator + ( mtx_d &A){
  if(A.col!=col || A.row!=row)
    {
      
    }
  mtx_d b;
  b.init_size(row,col);
  for(int i=0;i<row;i++)
    for(int j=0;j<row;j++)
      b.get_comp(i,j,A.pull_comp(i,j)+comps[col*i+j]);
  return b;
}

/*mtx_d mtx_d::operator * (mtx_d &A)
{
  if(A.col==col && A.row==row)
    {
      mtx_d b;
      b.init_size(row,col);
      for(int i=0;i<row;i++)
	for(int j=0;j<row;j++)
	  for()
	  b.get_comp(i,j,A.pull_comp(i,j)+comps[col*i+j]);
      return b;
}*/

void mtx_d::identity(int n){
  row = n; col = n;
  comps.resize(n*n);
  for(int i=0;i<row;i++)
    for(int j=0;j<col;j++){
      if(j==i)
	comps[i*col+j]=1;
      else
	comps[i*col+j]=0;
    }
}

int main(void){

  mtx_d a, b, c;

  a.identity(2);
  a.print();

  std::cout << std::endl;
  
  b.init_size(2,2);

  for(int i=0;i<b.row; i++)
    for(int j=0;j<b.col; j++)
      b.get_comp(i,j,2*i+j);

  b.print();

  std::cout << std::endl;
  
  c = a+b;
  c.print();
  
  return 0;
}
