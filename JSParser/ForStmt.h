#pragma once
#include<iostream>
#include<iomanip>
#include"Stmt.h"
#include"Expr.h"

using namespace std;

class ForStmt :public Stmt {
	Expr* test;
	Expr* update;
	Node* init;
	Node* body;
public:
	ForStmt(Node* b,Node* i,Expr* t, Expr* u,NodeType type=ForStmt_t):Node(type),test(t),update(u),init(i),body(b){}

	void display(int layer = 1) {
		cout << setw(layer * 2) << " " << "[For Statement]:" << endl;
		cout << setw(layer * 2 + 2) << " " << "init:" << endl;
		if (init) {
			init->display(layer + 2);
		}
		else {
			cout << setw(layer * 2 + 4) << " " << "null" << endl;
		}

		cout << setw(layer * 2 + 2) << " " << "test:" << endl;
		if (test) {
			test->display(layer + 2);
		}
		else {
			cout << setw(layer * 2 + 4) << " " << "null" << endl;
		}

		cout << setw(layer * 2 + 2) << " " << "update:" << endl;
		if (update) {
			update->display(layer + 2);
		}
		else {
			cout << setw(layer * 2 + 4) << " " << "null" << endl;
		}

		cout << setw(layer * 2 + 2) << " " << "body:" << endl;
		body->display(layer + 2);
	}
};