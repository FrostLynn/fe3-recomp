#!/usr/bin/env bash
# Run the recompiled game from the extracted disc folder. Usage: run.sh [seconds] (0 = no timeout)
root=$(cd "$(dirname "$0")" && pwd)
cd "$root/disc"
t=${1:-0}
if [ "$t" = 0 ]; then
    exec "${PS2X_RUNNER:-$root/tools/PS2Recomp/build/ps2xRuntime/ps2EntryRunner}" ./SLPS_254.41
fi

if command -v timeout >/dev/null 2>&1; then
    timeout "$t" "${PS2X_RUNNER:-$root/tools/PS2Recomp/build/ps2xRuntime/ps2EntryRunner}" ./SLPS_254.41
elif command -v gtimeout >/dev/null 2>&1; then
    gtimeout "$t" "${PS2X_RUNNER:-$root/tools/PS2Recomp/build/ps2xRuntime/ps2EntryRunner}" ./SLPS_254.41
else
    # Fallback timeout using python on macOS
    python3 -c "
import subprocess, sys
runner = sys.argv[1]
t = float(sys.argv[2])
p = subprocess.Popen([runner, './SLPS_254.41'])
try:
    p.wait(timeout=t)
except subprocess.TimeoutExpired:
    p.terminate()
    try: p.wait(timeout=3)
    except: p.kill()
" "${PS2X_RUNNER:-$root/tools/PS2Recomp/build/ps2xRuntime/ps2EntryRunner}" "$t"
fi
