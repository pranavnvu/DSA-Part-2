// class heap{
//     public : 
//     int size;
//     int arr[100];

//     heap(){
//         arr[0] = -1;
//         size = 0;
//     }

//     void insertion(int val){
//         size = size + 1;
//         int index = size;
//         arr[index] = val;

//         while(index > 1){
//             int parent = index / 2;;
//             if(arr[parent] <= arr[index]){
//                 swap(arr[parent],arr[index]);
//                 index = parent;
//             }
//             else{
//                 return;
//             }
//         }
//     }

//     void deletion(){
//         if(size == 0){
//             cout << "Nothing to delete.";
//         }

//         arr[1] =  arr[size];
//         size--;

//         int i = 1;
//         while(i <= size){
//             int leftindex = 2*i;
//             int rightindex = 2*i + 1;

//             if(leftindex < size && arr[i] < arr[leftindex]){
//                 swap(arr[i],arr[leftindex]);
//                 i = leftindex;
//             }
//             elseif(rightindex < size && arr[i] < arr[rightindex]){
//                 swap(arr[i],arr[rightindex]);
//                 i = rightindex;
//             }
//             else{
//                 return;
//             }
//         }
//     }
// };