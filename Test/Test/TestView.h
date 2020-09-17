
// TestView.h: CTestView 类的接口
//

#pragma once


class CTestView : public CFormView
{
protected: // 仅从序列化创建
	CTestView() noexcept;
	DECLARE_DYNCREATE(CTestView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST_FORM };
#endif

// 特性
public:
	CTestDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	double po;
	double ip;
	double another

	double rrrr;
	double ddddd;
	int g1;
	int g2;
	int akoi;
	double ui;
	int h2;
	int h1;
	int h3;
	int ddsss;
	double ssfd;
};

#ifndef _DEBUG  // TestView.cpp 中的调试版本
inline CTestDoc* CTestView::GetDocument() const
   { return reinterpret_cast<CTestDoc*>(m_pDocument); }
#endif

