#include<iostream>
using namespace std;
#define max_size 100
class queue
{
     private:
          int front, rear,arr[max_size];
     public:
          queue(){front = -1,rear = -1;
          }
          void enqueue(int value) {
               if (rear == max_size - 1) {
                    cout << "Customer limit reached." << endl;
               } else {
                    arr[++rear] = value;
                    if (front == -1) {
                         front = 0;}
                    cout << value << " customer added to list." << endl;
               }
          }
          void dequeue() {
               if (front == -1) {
                    cout << "There is no customer to serve." << endl;
               } else {
                    int value = arr[front++];
                    if (front > rear) {
                         front = rear = -1;
                    }
               }
          }
          void add_customer(int customer_id) {
               enqueue(customer_id);}
          int serve_customer() {
               if (front == -1) {
                    cout << "Customer list is empty, no customers to serve." << endl;
                    return -1;
               } else {
                    int served_customer = arr[front];
                    dequeue();
                    return served_customer;
               }
          }
};
int main() {
    queue q;
    q.add_customer(101);
    q.add_customer(102);
    q.add_customer(103);
    cout<<endl;
    int served_customer;
    while ((served_customer = q.serve_customer()) != -1) {
        cout << "Serving customer with ID: " << served_customer << endl;
    }
    return 0;
}