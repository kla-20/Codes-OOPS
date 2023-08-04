#include<iostream>
#include<cmath>
using namespace std;
const int n=7;

//These observations are of the height of 37 students
class data{
	public:
		void swap(int *a,int *b){
			int t;
			t=*a;
			*a=*b;
			*b=t;
		}
		
		float mean(int arr[n]){
			float sum;
			for(int i=0;i<n;i++)
				sum=sum+arr[i];
			sum=sum/n;
			return sum;
		}
		
		float median(int arr[n]){
			float median;
			if(n%2==0) //if n is even
				median=(arr[n/2]+arr[(n/2)-1])/2;
			else ///if n is odd
 				median=arr[(n-1)/2];
 			return median;
		}
	
};


class statistics{
	public:
		float quartiles(int arr[n]){
			float Q1,Q2,Q3,IQR;
			Q2=quartile_median(0,n,arr);
			Q1=quartile_median(0,n/2,arr);
			if(n%2==0){
				Q3=quartile_median(n/2,n,arr);
			}
			else{
				Q3=quartile_median((n/2) +1,n,arr);
			}
			IQR=Q3-Q1;
			float quart[4]={Q1,Q2,Q3,IQR};
			for(int i=0;i<4;i++) //How did it work? !!Good Job
				return quart[i];
		}
		
		float quartile_median(int i,int j,int arr1[n]){
			int med;
			if((i+j)%2==0){
				med=(arr1[((i+j)/2)-1]+arr1[(i+j)/2])/2;
			}
			else{
				med= arr1[((i+j)-1)/2];
			}
			return med;
		}
		
		void outlayers(float collect[4],int arr[n]){
	        static int number;  //for total outlayers
			int k;
		    float IQR=collect[3];
		    float Q1=collect[0];
		    float Q2=collect[1];
		    float Q3=collect[2];
		
			int i;
			for(i=0;(arr[i]<Q1-(1.5*IQR));i++){
				number=number+1;
			}
			//now number is the left outlayers count
			//Calculating the right outlayers using k 
			for(i=0;arr[i]>Q3+(1.5*IQR);i++){
				k=k+1;
			}
			//k is the right outlayer count
			number=number+k; //number is the total outlayers(both left and right) 
			//Now printing the outlayers
			cout<<"Total number of outlayers are:"<<number<<endl<<endl;
			cout<<"Total number of left outlayers are:"<<number-k<<endl;
			if(number-k>0){
				cout<<"they are->"<<endl;
				for(i=0.25*n;i>=0;i--){
					if(arr[i]<Q1-(1.5*IQR))
						cout<<arr[i]<<"\t";
				}
				cout<<endl;
			}
			cout<<"Total number of right outlayers are:"<<k<<endl;
			if(k>0){
				cout<<"they are->"<<endl;
				for(i=0.75*n;i<n;i++){
					if(arr[i]>Q3+1.5*IQR)
						cout<<arr[i]<<"\t";
				}
			}
			cout<<endl;
		}
		
		void percentile(int k,int arr[n]){
			cout<<"The percentile for k is:"<<arr[k*n/100]<<endl;
			cout<<"That means"<<k<<"th amount of data is less than "<<arr[k*n/100]<<endl;
		}
};

class behaviour{
	public:
			double skewness(int arr[n],float mean ){ //calculating the skewness
			double skew=0;
			int i;
			for(i=0;i<n;i++)
				skew=skew+(arr[i]-mean)*(arr[i]-mean)*(arr[i]-mean);
			skew=skew/((n-1)*(n-1)*(n-1));
			return skew;
		}
		
		double sd(int arr[n],float mean){ //calculating the standard deviation
			double sd=0;
			int i;
			for(i=0;i<n;i++)
				sd=sd+(arr[i]-mean)*(arr[i]-mean);
			sd=sd/n-1;
			return sqrt(sd);
		}
};
class approximation{
	public:
		void chebyshev(float k,float mean,double standard_deviation){
			cout<<"The least amount of data"<<endl<<"that is present from the range between "<<mean<<"-"<<k<<standard_deviation<<" to "<<mean<<"+"<<k<<standard_deviation<<" is" <<100*(1-(1/(k*k)))<<endl;
		}
		
		
		void normality(int arr[n], float mean, double sd){
			int a,b,c,i;
			for(i=0;mean-sd<=arr[i]<=mean+sd;i++)  		
				a++;
			for(i=0;mean-2*sd<=arr[i]<=mean+2*sd;i++)
				b++;
			for(i=0;mean-3*sd<=arr[i]<=mean+3*sd;i++)
				c++;
			if(a/n*100==68&&b/n*100==95&&c/n*100==99.7)
				cout<<"The data is normal"<<endl;
			else{
					cout<<"The data is normal\n";
					cout<<"Data about 1st sd is "<<a/n*100<<endl;
					cout<<"Data about 2nd sd is "<<b/n*100<<endl;
					cout<<"Data about 3rd sd is "<<c/n*100<<endl;
				}
		}
};

int main(){
int arr[n];
	cout<<"*******************BEFORE YOU UNDERSTAND YOUR DATA***********************"<<endl;
	cout<<"*******************ENTER THE NUMBER OF DATA ELEMENTS IN THE 'n' AREA IN THE CODE*****"<<endl;
	cout<<endl;  
	cout<<"Enter the elements"<<endl;
	cout<<endl;
	int i;
	for(i=0;i<n;i++){ //Creating an array of n elements
		cout<<"Enter the "<<i+1<<" element"<<endl;
		cin>>arr[i];
	}
	data obj;
	//sorting using bubble sort 
	for(i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1]){
				obj.swap(&arr[j],&arr[j+1]);
			}
			    
	/*for(i=0;i<n;i++) //printing the ordered array      // Ordered array print
		cout<<arr[i]<<"\t";
		cout<<endl; */
	
	float mean , median;
	mean=obj.mean(arr);
	median=obj.median(arr);
	//mode
	cout<<"Mean of the data  ="<<mean<<endl;
	cout<<"Median of the data  ="<<median<<endl;
	cout<<"Mode of the data is yet to be programmed"<<endl;
	/*collecting the statistics of the array */
	statistics abj; //abj is an object for class statistics
	float collect[4];
	collect[4]=abj.quartiles(arr);
	float Q1,Q2,Q3,IQR;
	Q1=collect[0];
	Q2=collect[1];
	Q3=collect[2];
	IQR=collect[3];
	cout<<"The six point summary of the data is:::"<<endl;
	cout<<"Min_value of the data: "<<arr[0]<<endl;
	cout<<"Max_value of the data: "<<arr[n-1]<<endl;
	cout<<"Range of the data: "<<arr[n-1]-arr[0]<<endl;
	cout<<"Mean: "<<mean<<endl;
	cout<<"Q1: "<<Q1<<endl;
	cout<<"Q2: "<<Q2<<endl;
	cout<<"Q3: "<<Q3<<endl;
	cout<<"Inter Quartile Range is: "<<IQR<<endl;
	
	
	abj.outlayers(collect,arr);
	cout<<"Enter the value of percentile you want to find in the data:"<<endl;
	int k;
	cin>>k;
	abj.percentile(k,arr);
	
	//Behaviour of the data
	behaviour bbj;
	double skewness,standard_deviation;
	skewness=bbj.skewness(arr,mean);
	standard_deviation=bbj.sd(arr,mean);
	cout<<"The skewness of the data =  "<<skewness<<endl;
	cout<<"The standard_deviation of the data =  "<<standard_deviation<<endl;
	//Approximation of the data
	approximation aaj;
	cout<<"Enter the value of Mth Standard deviation the present about your mean:"<<endl;
	float M;
	cin>>M;
	aaj.chebyshev(M,mean,standard_deviation);
	aaj.normality(arr,mean,standard_deviation);
		
	return 0;
}
	
	
