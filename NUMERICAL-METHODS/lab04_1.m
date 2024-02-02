%вариант 20
A = [3,2,1,1; 3,3,2,2; 3,3,3,4; 3,3,3,5]; %кэоффиценты
B = [1; -1; -4; -5];
n = 4; 
Y = matr(A,B); 
X = gauss(A,B,n);

function X = gauss(A,B,n)
    X(1) = 0;
    X(2) = 0;
    X(3) = 0;
    X(4) = 0;
    check = 1;
    proverka = n;
    k = 1;
    while proverka > 1 %пока не обойдем все строки матрицы
        while k < n
            pr = -A(k+1,check)/A(check,check);
            for i = check:n
               A(k+1,i) =A(k+1,i)+A(check,i)*pr; %точка с запятой
            end
            B(k+1)=B(k+1)+B(check)*pr;
            k = k + 1;
        end
        proverka = proverka - 1;
        check = check + 1;
        k = check;
    end
    for i = n:-1:1
        X(i) = (B(i) - (A(i,4)*X(4)) - (A(i,3)*X(3)) - (A(i,2)*X(2)))/A(i,i);
    end
end

function Y = matr(A,B)
    C = A\B;
    Y(1) = C(1);
    Y(2) = C(2);
    Y(3) = C(3);
    Y(4) = C(4);
end