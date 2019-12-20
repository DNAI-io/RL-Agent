RLAgent

#Install dependencies (with powershell)
```
git clone --recurse-submodules -j8 git@github.com:DNAI-io/RL-Agent.git
cd RL-Agent
.\Scripts\Dependencies.ps1
```

if scripts fail you need to enable powershell script execution like this:

Start a powershell with admin right and execute the following command
```
Set-ExecutionPolicy -ExecutionPolicy Bypass
```
to reset to default
```
Set-ExecutionPolicy -ExecutionPolicy Default
```
