% 创建一个图形窗口，并获取其句柄
figureHandle = figure;

% 在图形窗口中创建一个坐标轴，并获取其句柄
axesHandle = axes;

% 在坐标轴中绘制一条曲线，并获取其句柄
lineHandle = plot(1:10, (1:10).^2);

% 修改图形对象的属性
set(figureHandle, 'Name', 'My Figure');
set(axesHandle, 'XLim', [0 10], 'YLim', [0 100]);
set(lineHandle, 'LineWidth', 2, 'Color', 'r');
