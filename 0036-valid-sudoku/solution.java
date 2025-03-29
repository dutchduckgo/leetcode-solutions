class Solution {
    public boolean isValidSudoku(char[][] board) {
        HashSet<Character> hs;
        for (int i = 0; i < 9; i ++) {
            hs = new HashSet<>();
            for (int j = 0; j < 9; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            
            }
        }
        for (int i = 0; i < 9; i ++) {
            hs = new HashSet<>();
            for (int j = 0; j < 9; j ++) {
                if (board[j][i] != '.') 
                    if (!hs.add(board[j][i])) return false;
            }
        }
        // blocks -----
        hs = new HashSet<>();
        for (int i = 0; i < 3; i ++ ) {
            
            for (int j = 0; j < 3; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }
        hs = new HashSet<>();
        for (int i = 3; i < 6; i ++ ) {
            
            for (int j = 0; j < 3; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }

        hs = new HashSet<>();
        for (int i = 0; i < 3; i ++ ) {
            
            for (int j = 3; j < 6; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }
        hs = new HashSet<>();
        for (int i = 0; i < 3; i ++ ) {
            
            for (int j = 6; j < 9; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }
        hs = new HashSet<>();
        for (int i = 0; i < 3; i ++ ) {
            
            for (int j = 6; j < 9; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }
        hs = new HashSet<>();
        for (int i = 3; i < 6; i ++ ) {
            
            for (int j = 0; j < 3; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }
        hs = new HashSet<>();
        for (int i = 6; i < 9; i ++ ) {
            
            for (int j = 0; j < 3; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }

        hs = new HashSet<>();
        for (int i = 6; i < 9; i ++ ) {
            
            for (int j = 3; j < 6; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }
        hs = new HashSet<>();
        for (int i = 3; i < 6; i ++ ) {
            
            for (int j = 3; j < 6; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }
        hs = new HashSet<>();
        for (int i = 3; i < 6; i ++ ) {
            
            for (int j = 6; j < 9; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }
        hs = new HashSet<>();
        for (int i = 6; i < 9; i ++ ) {
            
            for (int j = 6; j < 9; j ++) {
                if (board[i][j] != '.') 
                    if (!hs.add(board[i][j])) return false;
            }
        }

        return true;
    }
}
