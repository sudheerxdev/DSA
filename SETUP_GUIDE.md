# 🚀 Advanced DSA Setup - VS Code

## 📋 Quick Shortcuts

| Shortcut | Action |
|----------|--------|
| `Ctrl+Alt+B` | Build Debug |
| `Ctrl+Alt+Shift+B` | Build Release (Optimized) |
| `Ctrl+Alt+R` | Build & Run |
| `F5` | Start Debugging |
| `Shift+F5` | Stop Debugging |
| `F9` | Toggle Breakpoint |
| `F10` | Step Over |
| `F11` | Step Into |
| `Shift+F11` | Step Out |
| `Ctrl+K Ctrl+C` | Clean Build |

---

## 🎯 Build Configurations

### **1. Build Debug**
- Includes debug symbols (`-g`)
- No optimization (`-O0`)
- Runtime checks enabled
- Use this to debug your code
- **Command:** `Ctrl+Alt+B`

### **2. Build Release**
- Optimized compilation (`-O2`)
- Smaller binary size
- Faster execution
- Best for submission
- **Command:** `Ctrl+Alt+Shift+B`

### **3. Build with Sanitizer**
- Detects memory leaks
- Catches undefined behavior
- Finds array out of bounds
- Use when debugging is hard
- **Task:** `Build with Sanitizer (Memory)`

### **4. Build & Run**
- One command: compile + execute
- Perfect for quick testing
- **Command:** `Ctrl+Alt+R`

---

## 🔧 Debug Features

### **Breakpoints**
- Click on line number to set breakpoint (Red dot)
- Condition: Right-click → Edit Breakpoint
- Logpoint: Log without pausing

### **Watch Variables**
- Add to watch in Debug view
- See values in real-time
- Monitor array elements

### **Call Stack**
- See function call chain
- Navigate between function calls
- Understand recursion flow

### **Memory Inspector**
- View memory addresses
- Inspect pointer values
- Useful for linked lists & trees

---

## 📝 Code Snippets Ready

### **Type `dsa` for:**
```cpp
#include<bits/stdc++.h>
using namespace std;

// Common macros already included
// Fast I/O setup
// MOD, INF constants

int main(){
  // Your code here
  return 0;
}
```

### **Other Snippets:**
- `vec` → Vector declaration
- `for` → For loop
- `binsearch` → Binary search template
- `dfs` → DFS traversal
- `bfs` → BFS traversal
- `sort` → Quick sort
- `debug` → Debug print (offline only)

**Access:** Start typing, then Ctrl+Space to see suggestions

---

## 💡 Debugging Tips

### **1. Find Memory Leaks**
```bash
# Run with sanitizer
Build with Sanitizer (Memory)
# Then press F5 to debug
```

### **2. Trace Array Changes**
1. Set breakpoint at suspicious line
2. Add array to watch
3. Step through and observe

### **3. Debug Recursive Functions**
1. Use Call Stack tab
2. See each recursion level
3. Check parameter values

### **4. Find Off-by-One Errors**
1. Set conditional breakpoint
2. Add condition: `i == n` or `i == size`
3. Program pauses only when triggered

---

## 🧹 Cleanup

- **Ctrl+K Ctrl+C** → Remove all .exe files
- Clean before submission
- Keeps folder organized

---

## 📚 DSA Template Includes

**Macros defined:**
```cpp
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define F(i,a,b) for(int i=a;i<b;i++)
#define RF(i,a,b) for(int i=a;i>=b;i--)
#define FLL(i,a,b) for(ll i=a;i<b;i++)
```

**Constants:**
```cpp
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
```

**Typedefs:**
```cpp
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
```

---

## 🛠️ Extensions to Install

**Run:** `Ctrl+Shift+P` → "Extensions: Show Recommended Extensions"

| Extension | Purpose |
|-----------|---------|
| **C/C++ Extension Pack** | Core C++ support |
| **GitLens** | Git integration |
| **Error Lens** | See errors inline |
| **Better Comments** | Color-coded comments |
| **Todo Tree** | Track TODOs |
| **VSCode Icons** | Better file icons |
| **SonarLint** | Code quality |
| **Codeforces** | Direct CF integration |
| **LeetCode** | Direct LeetCode integration |

---

## 📂 Folder Structure

```
d:\DSA\
├── hello.cpp          (Your C++ files)
├── .vscode/
│   ├── settings.json    (Advanced config)
│   ├── tasks.json       (Build tasks)
│   ├── launch.json      (Debug config)
│   ├── keybindings.json (Shortcuts)
│   ├── cpp.code-snippets
│   ├── c_cpp_properties.json
│   └── extensions.json
├── output/            (Release builds)
└── debug/             (Debug builds)
```

---

## 🎓 Usage Flow

### **Practice Problem:**
1. Type `dsa` → Get template
2. Write solution
3. Test: `Ctrl+Alt+R`
4. Debug if needed: `F5`
5. Release build: `Ctrl+Alt+Shift+B`
6. Submit optimized version

### **Find Bug:**
1. Set breakpoint: `F9`
2. Start debug: `F5`
3. Step through: `F10` or `F11`
4. Check variables in watch
5. Fix issue

---

## ⚡ Pro Tips

1. **Use Sanitizer** for debugging memory issues
2. **Breakpoints > Printf** for tracing code flow
3. **Watch tab** to monitor variable values
4. **Snippets** for faster coding
5. **F10** to step over functions
6. **F11** to debug inside functions

---

**Happy DSA Learning! 🚀**
