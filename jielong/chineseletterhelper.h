
#ifndef CHINESELETTERHELPER
#define CHINESELETTERHELPER

#include <QObject>
class ChineseLetterHelper
{
    // ����GB2312����
public:
    static bool In(wchar_t start, wchar_t end, wchar_t code);

    static char Convert(int n);

    // ��ȡ��һ�����ֵ�����ĸ
    static QString GetFirstLetter(const QString &src);

    // ��ȡ���к��ֵ�����ĸ
    static QString GetFirstLetters(const QString &src);

    // ��ȡһ�����ֱ���ĺ���ƴ��
    static QString GetPinyin(int code);

    // ��ȡ���к��ֵĺ���ƴ��
    static QString GetPinyins(const QString& text);
};

#endif // CHINESELETTERHELPER_H
