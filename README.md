# maskdemo
 需要在弹框的窗体背后遮罩原有主窗体，使得突出显示弹窗窗体(刘典武example)


需要在弹框的窗体背后遮罩原有主窗体，使得突出显示弹窗窗体，突然想到之前写过一个全局截屏的东东，原理一致，拿来改改。
优点：只需要引入一个头文件和实现文件即可，在主窗体中设置下需要遮罩的主窗体和可能弹窗窗体的类名即可。就是如此简单。
复制代码

    //第一步,设置需要遮罩的父窗体
        MaskWidget::Instance()->setMainWidget(this);
        //第二步,设置哪些弹窗窗体需要被遮罩
        QStringList dialogNames;
        dialogNames << "frm1" << "frm2";
        MaskWidget::Instance()->setDialogNames(dialogNames);

附带的全局截屏类，也是只要一行代码即可在项目任何地方使用全局截屏。

也可以作为蒙版这样的效果 

ScreenWidget 类中有个 bgScreen 成员 注意一下 实现遮罩的关键