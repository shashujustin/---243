private:
    char* str;
    int length;

public:
    // ���캯��
    MyString() : str(nullptr), length(0) {
        str = new char[1];  // ��ȷ����1�ֽ��ڴ�
        str[0] = '\0';      // ��ȷ���ÿ��ַ���
    }

    MyString(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    // �������캯��
    MyString(const MyString& other) {
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    // ��������
    ~MyString() {
        delete[] str;
    }

    // ���ظ�ֵ�����
    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] str;
            length = other.length;
            str = new char[length + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    // ����+�����
    MyString operator+(const MyString& other) const {
        MyString newStr;
        newStr.length = length + other.length;
        newStr.str = new char[newStr.length + 1];
        strcpy(newStr.str, str);
        strcat(newStr.str, other.str);
        return newStr;
    }

    // ��Ԫ����ʵ���ַ���������+MyString
    friend MyString operator+(const char* lhs, const MyString& rhs) {
        MyString temp(lhs);
        return temp + rhs;
    }

    // ����+=�����
    MyString& operator+=(const MyString& other) {
        char* temp = new char[length + other.length + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        delete[] str;
        str = temp;
        length += other.length;
        return *this;
    }

    // ����[]�����
    char& operator[](int index) {
        return str[index];
    }

    // ����<<�����
    friend ostream& operator<<(ostream& os, const MyString& s) {
        os << s.str;
        return os;
    }

    // ���رȽ������
    bool operator<(const MyString& other) const {
        return strcmp(str, other.str) < 0;
    }

    bool operator==(const MyString& other) const {
        return strcmp(str, other.str) == 0;
    }

    bool operator>(const MyString& other) const {
        return strcmp(str, other.str) > 0;
    }

    // �Ӵ�����
    MyString operator()(int start, int len) const {
        MyString sub;
        sub.length = len;
        sub.str = new char[len + 1];
        for (int i = 0; i < len; i++) {
            sub.str[i] = str[start + i];
        }
        sub.str[len] = '\0';
        return sub;
    }