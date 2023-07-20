#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct DateBirth
{
    int day;
    int month;
    int year;
};

struct InforStudent
{
    char FullName[40];
    char Id[20];
    char Class[20];
    int old;
    float math, literature, english;
    float MediumScore;
    char Rank[15];
    DateBirth Date;
};

void Input(struct InforStudent &sv)
{
    fflush(stdin);
    printf("Fullname:");
    gets(sv.FullName);
    fflush(stdin);
    printf("Id:");
    gets(sv.Id);
    printf("Class:");
    gets(sv.Class);
    printf("Day:");
    scanf("%d", &sv.Date.day);
    printf("Month:");
    scanf("%d", &sv.Date.month);
    printf("Year:");
    scanf("%d", &sv.Date.year);
    printf("math:");
    scanf("%f", &sv.math);
    printf("literature:");
    scanf("%f", &sv.literature);
    printf("english:");
    scanf("%f", &sv.english);
}

void InputStudent(struct InforStudent sv[], int &n)
{
    printf("So luong hoc sinh muon nhap:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        Input(sv[i]);
    }
}

void DiskayStudent(struct InforStudent sv[], int n)
{
    printf("\tName\t");
    printf("id\t");
    printf("class\t");
    printf("\tmath\t");
    printf("literature\t");
    printf("english\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-3s\t", sv[i].FullName);
        printf("%s\t", sv[i].Id);
        printf("%s\t", sv[i].Class);
        printf("%5.2f", sv[i].math);
        printf("%10.2f\t", sv[i].literature);
        printf("%15.2f\n", sv[i].english);
    }
}

void MinMediumScore(struct InforStudent sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        sv[i].MediumScore = (sv[i].math + sv[i].literature + sv[i].english) / 3;
    }
    float min = sv[0].MediumScore;
    for (int i = 1; i < n; i++)
    {
        if (sv[i].MediumScore < min)
        {
            min = sv[i].MediumScore;
        }
    }
    printf("Min Medium Score of students = %.2f\n", min);
}

void OldYears(InforStudent &sv)
{
    time_t TTime = time(0);
    tm *Now = localtime(&TTime);
    int NowYear = Now->tm_year + 1900;
    sv.old = NowYear - sv.Date.year;
}

void MinOldOfStudents(struct InforStudent sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        OldYears(sv[i]);
    }
    int min = sv[0].old;
    for (int i = 0; i < n; i++)
    {
        OldYears(sv[i]);
        if (sv[i].old < min)
        {
            min = sv[i].old;
        }
    }
    printf("MinOld of students:%d", min);
}

void OutPutStudentInClass(struct InforStudent sv[], int n)
{
    char NameofClass[20];
    printf("NameOfClass want to print:");
    fflush(stdin);
    gets(NameofClass);
        printf("class list of %s:\n", NameofClass);
        printf("\tName\t");
        printf("id\t");
        printf("class\t");
        printf("\tmath\t");
        printf("literature\t"); 
        printf("english\n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(sv[i].Class, NameofClass) == 0)
        {
            printf("%-3s\t", sv[i].FullName);
            printf("%s\t", sv[i].Id);
            printf("%s\t", sv[i].Class);
            printf("%5.2f", sv[i].math);
            printf("%10.2f\t", sv[i].literature);
            printf("%15.2f\n", sv[i].english);
        }
    }
}

void ListSortStudent(struct InforStudent sv[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].MediumScore > sv[j].MediumScore)
            {
                InforStudent temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
    DiskayStudent(sv, n);
}

void SortByName(struct InforStudent sv[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(sv[i].FullName, sv[j].FullName) > 0)
            {
                InforStudent temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
    DiskayStudent(sv, n);
}

void FindStudentOfClass(struct InforStudent sv[], int n)
{
    char Name[50];
    printf("Name Of Student You Want To Find In Class :");
    gets(Name);
    size_t len = strlen(Name);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(sv[i].FullName, Name) == 0)
        {
            printf(" Systerm Found Name of Student,Who you want to find in class :%s", sv[i].FullName);
            return;
        }
    }
    printf("Cannot Information of that student in the class ");
}

// Note : cần xem lại điều kiện n trong for rút dần về trước
void DeleteStudentInClass(struct InforStudent sv[], int &n)
{
    char Name[50];
    printf("Name Of Student You Want To Delete In Class :");
    gets(Name);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(sv[i].FullName, Name) == 0)
        {
            for (int j = i; i < n; i++)
            {
                sv[j] = sv[j + 1];
            }
            n -= 1;
        }
    }
    DiskayStudent(sv, n);
}

void rank(struct InforStudent sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (sv[i].MediumScore >= 8.0)
        {
            strcpy(sv[i].Rank, "Gioi");
        }
        else if (sv[i].MediumScore >= 7.0 && sv[i].MediumScore < 8.0)
        {
            strcpy(sv[i].Rank, "Kha");
        }
        else if (sv[i].MediumScore >= 5.0 && sv[i].MediumScore < 7.0)
        {
            strcpy(sv[i].Rank, "Trung Binh");
        }
        else
        {
            strcpy(sv[i].Rank,"Yeu");
        }
    }
}

void SortByRank(struct InforStudent sv[], int n)
{   
    rank(sv,n);
    char Rank[20];
    printf("you want to Sort by rank:");
    gets(Rank);
    printf("Rank %s:\n",Rank);
    printf("\tName\t");
    printf("id\t");
    printf("class\t");
    printf("\tmath\t");
    printf("literature\t");
    printf("english\n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(sv[i].Rank, Rank) == 0)
        {
        printf("%-3s\t", sv[i].FullName);
        printf("%s\t", sv[i].Id);
        printf("%s\t", sv[i].Class);
        printf("%5.2f", sv[i].math);
        printf("%10.2f\t", sv[i].literature);
        printf("%15.2f\n", sv[i].english);
        }
    }
}

void WriteInFile(struct InforStudent sv[], int n, char link[])
{
    FILE *ftr;
    ftr = fopen(link, "wb");
    if(ftr == NULL)
    {
        printf("Warring cannot find link of file");
    }
    fwrite(&n, sizeof(n), 1, ftr);
    for (int i = 0; i < n; i++)
    {
        fwrite(&sv[i], sizeof(InforStudent), 1, ftr);
    }
}

void ReadFromFile(struct InforStudent sv[], int &n, char link[])
{
    FILE *ftr;
    ftr = fopen(link, "rb");
    if (ftr == NULL)
    {
        printf("Warring cannot find link of file");
    }
    fread(&n, sizeof(n), 1, ftr);
    for (int i = 0; i < n; i++)
    {
        fread(&sv[i], sizeof(InforStudent), 1, ftr);
    }
}

void ChooseRandom()
{
    printf("chon phim bat ki de tiep tuc:");
    getch();
}

int main()
{
    struct InforStudent inf[50];
    struct InforStudent sv;
    int choose;
    int n;
    char linkFile[50];
    do
    {
        printf("\nMENU:");
        printf("\n1- Nhap danh sach sinh vien");
        printf("\n2- Xuat danh sah sinh vien");
        printf("\n3- Tim max DTB");
        printf("\n4- Tim min Tuoi");
        printf("\n5- Xuat danh sach sinh vien theo lop");
        printf("\n6- Sap xep sinh vien theo danh sach DTB");
        printf("\n7- Sap xep sinh vien theo ten");
        printf("\n8- Tim sinh vien theo ten");
        printf("\n10- Xoa sinh vien theo ten");
        printf("\n11- Nhap danh sach sinh vien vao Flie");
        printf("\n0- Thoat");
        printf("\nchon yeu cau tren:");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            InputStudent(inf, n);
            ChooseRandom();
            break;
        case 2:
            DiskayStudent(inf, n);
            ChooseRandom();
            break;
        case 3:
            MinMediumScore(inf, n);
            ChooseRandom();
            break;
        case 4:
            MinOldOfStudents(inf, n);
            ChooseRandom();
            break;
        case 5:
            OutPutStudentInClass(inf, n);
            ChooseRandom();
            break;
        case 6:
            ListSortStudent(inf, n);
            ChooseRandom();
            break;
        case 7:
            SortByName(inf, n);
            ChooseRandom();
            break;
        case 8:
            FindStudentOfClass(inf, n);
            ChooseRandom();
            break;
        case 9:
            DeleteStudentInClass(inf, n);
            ChooseRandom();
            break;
        case 10:
            SortByName(inf,n);
            ChooseRandom();
            break;
        case 11:
            printf("Link of file : ");
            gets(linkFile);
            WriteInFile(inf, n, linkFile);
            break;
        case 12:
            printf("Lnk of file : ");
            gets(linkFile);
            ReadFromFile(inf, n, linkFile);
            break;
        }
    } while (choose != 0);
    return 0;
}
// countine case 10 xuất danh sách loại hạng:
// B1 : chia loại hạng ra làm 4 phần(giỏi, khá , trung bình, yếu)
// B2 : cho 1 vòng for chạy nếu như bằng loại hạng đó thì in ra