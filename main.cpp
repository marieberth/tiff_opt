#include <QCoreApplication>
#include<tiffio.h>
#include<string>
//#include<intypes.h>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
#include<tuple>
#include"squirrel_opt.h"

// #include "EvalFunc.h"
#include "Swarm.h"
using namespace PSO;

double eval(int gen, int id, const Point& x, const void* params) {
  double f;
  f = -(x[0]-10)*(x[0]-10) - (x[1]-5)*(x[1]+x[2]-5) + 10;
  return f;
}


int main()
{

    const char* filename="/media/marieb/Disk-3TB/Data/Clustered/Actin-6-cool";
    TIFF* tiffrNANO = NULL;
    tiffrNANO=TIFFOpen(filename,"r");

    std::vector<int> image {1,2,3,4,5,6,7,8,9};

    

    return 1;
}


