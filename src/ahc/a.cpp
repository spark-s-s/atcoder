// Copyright 2023 spark

#include <bits/stdc++.h>

int main() {
  // // debug
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());

  // パラメタ入力
  int size_of_grid, number_of_exits, standard_deviation;
  std::cin >> size_of_grid >> number_of_exits >> standard_deviation;
  std::vector<std::pair<int, int>> exit_cells(number_of_exits);
  for (int i=0; i < number_of_exits; i++) {
    std::cin >> exit_cells[i].first >> exit_cells[i].second;
  }

  // 定義
  std::vector<std::vector<int> >
    placement(size_of_grid, std::vector<int>(size_of_grid, 0));
  std::vector<int> ans(number_of_exits, 0);

  // 配置の決定
  for (int i=0; i < number_of_exits; i++) {
    placement[exit_cells[i].first][exit_cells[i].second] = i;
  }

  // 配置
  for (int i=0; i < size_of_grid; i++) {
    for (int j=0; j < size_of_grid - 1; j++) {
      std::cout << placement[i][j] << ' ';
    }
    std::cout << placement[i][size_of_grid - 1] << std::endl;
  }
  std::cout.flush();

  // 計測 for
  std::vector<std::pair<int, int>> memory(number_of_exits);
  for (int i=0; i < number_of_exits; i++) {
    std::cout << i << ' ' << 0 << ' ' << 0 << std::endl;
    std::cout.flush();
    std::cin >> memory[i].first;
    memory[i].second = i;
  }

  // 計測 while
  // bool is_not_finished = true;
  // // for debug
  // is_not_finished = false;
  // while (is_not_finished) {
  //   int i, y, x;
  //   std::cout << i << ' ' << y << ' ' << x << std::endl;
  //   std::cout.flush();
  // }

  // 計測の終了
  std::cout << -1 << ' ' << -1 << ' ' << -1 << std::endl;

  // 計算
  std::sort(memory.begin(), memory.end());
  for (int i=0; i < number_of_exits; i++) {
    ans[i] = memory[i].second;
  }


  // 回答
  for (int i=0; i < number_of_exits; i++) {
    std::cout << ans[i] << std::endl;
  }
  std::cout.flush();
}
