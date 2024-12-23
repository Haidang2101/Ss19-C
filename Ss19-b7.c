#include <stdio.h>

struct student {
	int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void printStudents(struct student students[], int n){
	for(int i = 0; i < n; i ++){
		printf("id: %d, name: %s, age: %d, phone number: %s",
		students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
		printf("\n");
	}
}

void deleteStudent(int id ,struct student students[], int *n){
	for(int i = id; i < *n-1; i++){
		students[i] = students[i+1];
	}
	*n -= 1;
}

int main(){
	struct student students[5] = {
		
 		{1, "Dang", 24, "111"},
        {2, "Kien", 15, "222"},
        {3, "Long", 16, "333"},
        {4, "Dung", 176, "444"},
        {5, "Khanh", 13, "555"}
	
	};
	
	 int n = 5;  

    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, n);

    deleteStudent(3, students, &n);

    printf("\nDanh sach sinh vien sau khi xoa:\n");
    printStudents(students, n);
	
	return 0;
}
