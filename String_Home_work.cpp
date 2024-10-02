#include <iostream>
using namespace std;
#include <cctype>
#include <string>
#include <stdio.h>
#include <string.h>
#include <cstring>

/*

int main()
{
    setlocale(0, "");
       //1.	Ввести с клавиатуры строку текста, а затем один символ.Показать на экран индексы и количество совпадений(ищем вхождения символа в строку).
    char* name = new char[256];

    cout << "Введите текст ";
    cin.getline(name, 255);

    cout << "Введите символ ";
    char x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == x)
        {
            count ++;
        }
    }
    cout <<"символ " << x << " встречается " << count << " раз(-а)";
    */

    /*
      //3.	Подсчитать среднюю длину слова во введённом предложении.
    char* name = new char[256];

    cout << "Введите текст ";
    cin.getline(name, 255);
    int count = 1;

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            count++;
        }
    }
    int x = strlen(name) / count;
    cout << "средняя длина слова во введённом предложении = " << x << " символов";
}
  
    */

/*
bool pn(char y)
{
    return ispunct(y); //ispunct проверяет является ли символ знаком препинания
}

char tl(char y) 
{
    return tolower(y);
}

int main()
{
    setlocale(0, "");

    
     //4.	Определить, является ли строка палиндромом - аргентина манит негра

    char* name_temp = new char[256];

    cout << "Введите текст ";
    setlocale(0, "C"); // английское си - это отключить кириллицу
    cin.getline(name_temp, 255);
    setlocale(0, "");

    _strlwr_s(name_temp, 255);
    //cout << name_temp;

    char* name = new char[256];



    char x = ' ';

    int length_temp = strlen(name_temp);

    static int j = 0;
    for (int i = 0; i < length_temp; i++)
    {
        if (name_temp[i] != x && !pn(name_temp[i]))
        {
            name[j] = name_temp[i];
            //cout << name[j];
            j++;
        }        
    }

    name[j] = '\0';
    cout << "\n";

    int count = 0;
    int length = strlen(name);



    for (int i = 0,  k = (length - 1); i < (length/2); i++, k--)
    {
        if (name[i] == name[k])
        {
            count++;
        }
    }
    setlocale(0, "");

    if (count == (length / 2))
    {
        cout << "строка палиндром";
    }
    else
    {
        cout << "строка не палиндром";
    }
    delete[] name_temp;
    delete[] name;
    }

*/

    /*
        int count_word(char* text, char* word)
{
    int count = 0;
    char* ptr = text;
    while ((ptr = strstr(ptr, word))) {
        count++; // Увеличиваем счётчик при каждом нахождении слова
        ptr++; // Переходим к следующему символу после найденного вхождения
    }
    return count;
}
    
int main()
{
    setlocale(0, "");
    
    //5.	Посчитать, сколько раз определённое слово содержится в строке текста.

    char* text = new char[256];
    cout << "Введите текст ";
    cin.getline(text, 255);

    char* word = new char[256];
    cout << "Введите слово для поиска: ";
    cin.getline(word, 255);

    int count_times = count_word(text, word);
    cout << "Слово " << word << " встречается " << count_times << " раз";
    */
//____________________________________________________________________________________________    

    //Показать на экране фразу «ЭТО СПАМ!»

bool find_word(char* text, const char* word)
{
   return strstr(text, word) != nullptr;
}

int main()
{
    setlocale(0, "");

    string arr_1[2] = {"viagra", "XXX"};
    
    char* text = new char[256];
    cout << "Введите текст: ";
    cin.getline(text, 255);

    for (int i = 0; i < 2; i++)
    {
        const char* word = arr_1[i].c_str();
        if (find_word(text, word))
        {
            cout << "СПАМ";
            break;
        }
    }
    delete[] text;
}





 
