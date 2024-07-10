% 定义一个简单的函数
function y = myFunction(x)
  y = x^2;
end

% 创建函数句柄
funcHandle = @myFunction;

% 使用函数句柄调用函数
result = funcHandle(5);
disp(['结果: ', num2str(result)]);

% 函数句柄也可以用于匿名函数
anonFuncHandle = @(x) x^3;
resultAnon = anonFuncHandle(3);
disp(['匿名函数结果: ', num2str(resultAnon)]);
