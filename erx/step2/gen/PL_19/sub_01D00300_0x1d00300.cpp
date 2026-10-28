#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D00300
// Address: 0x1d00300 - 0x1d003e0
void sub_01D00300_0x1d00300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D00300_0x1d00300");
#endif

    switch (ctx->pc) {
        case 0x1d00314u: goto label_1d00314;
        case 0x1d0031cu: goto label_1d0031c;
        case 0x1d00330u: goto label_1d00330;
        case 0x1d0033cu: goto label_1d0033c;
        case 0x1d00348u: goto label_1d00348;
        case 0x1d00358u: goto label_1d00358;
        case 0x1d00368u: goto label_1d00368;
        case 0x1d00398u: goto label_1d00398;
        case 0x1d003a4u: goto label_1d003a4;
        case 0x1d003acu: goto label_1d003ac;
        case 0x1d003bcu: goto label_1d003bc;
        case 0x1d003d4u: goto label_1d003d4;
        default: break;
    }

    ctx->pc = 0x1d00300u;

    // 0x1d00300: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d00300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00304: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d00304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00308: 0x3c0601d0  lui         $a2, 0x1D0
    ctx->pc = 0x1d00308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)464 << 16));
    // 0x1d0030c: 0xc73fa30  jal         func_1CFE8C0
    ctx->pc = 0x1D0030Cu;
    SET_GPR_U32(ctx, 31, 0x1D00314u);
    ctx->pc = 0x1D00310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0030Cu;
    // 0x1d00310: 0x24c67f70  addiu       $a2, $a2, 0x7F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE8C0u, 0x1D0030Cu, 0x1D00314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00314u;
label_1d00314:
    // 0x1d00314: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D00314u;
    {
        const bool branch_taken_0x1d00314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00314u;
        // 0x1d00318: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00314) {
            ctx->pc = 0x1D002E4u;
            return;
        }
    }
    ctx->pc = 0x1D0031Cu;
label_1d0031c:
    // 0x1d0031c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00320: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d00320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00324: 0x3c0601d0  lui         $a2, 0x1D0
    ctx->pc = 0x1d00324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)464 << 16));
    // 0x1d00328: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D00328u;
    {
        const bool branch_taken_0x1d00328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00328u;
        // 0x1d0032c: 0x24c67f40  addiu       $a2, $a2, 0x7F40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00328) {
            ctx->pc = 0x1D002D8u;
            return;
        }
    }
    ctx->pc = 0x1D00330u;
label_1d00330:
    // 0x1d00330: 0x3c1001d0  lui         $s0, 0x1D0
    ctx->pc = 0x1d00330u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)464 << 16));
    // 0x1d00334: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d00334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00338: 0x26107f10  addiu       $s0, $s0, 0x7F10
    ctx->pc = 0x1d00338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32528));
label_1d0033c:
    // 0x1d0033c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d0033cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00340: 0xc73f8b8  jal         func_1CFE2E0
    ctx->pc = 0x1D00340u;
    SET_GPR_U32(ctx, 31, 0x1D00348u);
    ctx->pc = 0x1D00344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00340u;
    // 0x1d00344: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE2E0u, 0x1D00340u, 0x1D00348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00348u;
label_1d00348:
    // 0x1d00348: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1d00348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d0034c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1d0034cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d00350: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1D00350u;
    SET_GPR_U32(ctx, 31, 0x1D00358u);
    ctx->pc = 0x1D00354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00350u;
    // 0x1d00354: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1D00350u, 0x1D00358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00358u;
label_1d00358:
    // 0x1d00358: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x1d00358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d0035c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0035cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00360: 0xc73f49c  jal         func_1CFD270
    ctx->pc = 0x1D00360u;
    SET_GPR_U32(ctx, 31, 0x1D00368u);
    ctx->pc = 0x1D00364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00360u;
    // 0x1d00364: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD270u, 0x1D00360u, 0x1D00368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00368u;
label_1d00368:
    // 0x1d00368: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x1d00368u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d0036c: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d0036cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d00370: 0x8e2c024c  lw          $t4, 0x24C($s1)
    ctx->pc = 0x1d00370u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1d00374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d00374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00378: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d00378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d0037c: 0x8c4d024c  lw          $t5, 0x24C($v0)
    ctx->pc = 0x1d0037cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d00380: 0x8d860084  lw          $a2, 0x84($t4)
    ctx->pc = 0x1d00380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 132)));
    // 0x1d00384: 0x8da50084  lw          $a1, 0x84($t5)
    ctx->pc = 0x1d00384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1d00388: 0xce3021  addu        $a2, $a2, $t6
    ctx->pc = 0x1d00388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x1d0038c: 0x24a52120  addiu       $a1, $a1, 0x2120
    ctx->pc = 0x1d0038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8480));
    // 0x1d00390: 0xc73f48a  jal         func_1CFD228
    ctx->pc = 0x1D00390u;
    SET_GPR_U32(ctx, 31, 0x1D00398u);
    ctx->pc = 0x1D00394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00390u;
    // 0x1d00394: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD228u, 0x1D00390u, 0x1D00398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00398u;
label_1d00398:
    // 0x1d00398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d00398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0039c: 0xc73f48c  jal         func_1CFD230
    ctx->pc = 0x1D0039Cu;
    SET_GPR_U32(ctx, 31, 0x1D003A4u);
    ctx->pc = 0x1D003A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0039Cu;
    // 0x1d003a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD230u, 0x1D0039Cu, 0x1D003A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D003A4u;
label_1d003a4:
    // 0x1d003a4: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x1D003A4u;
    {
        const bool branch_taken_0x1d003a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D003A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D003A4u;
        // 0x1d003a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d003a4) {
            ctx->pc = 0x1D002E4u;
            return;
        }
    }
    ctx->pc = 0x1D003ACu;
label_1d003ac:
    // 0x1d003ac: 0x3c1001d0  lui         $s0, 0x1D0
    ctx->pc = 0x1d003acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)464 << 16));
    // 0x1d003b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d003b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d003b4: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D003B4u;
    {
        const bool branch_taken_0x1d003b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D003B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D003B4u;
        // 0x1d003b8: 0x26107f40  addiu       $s0, $s0, 0x7F40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d003b4) {
            ctx->pc = 0x1D0033Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0033c;
        }
    }
    ctx->pc = 0x1D003BCu;
label_1d003bc:
    // 0x1d003bc: 0x3c0401d0  lui         $a0, 0x1D0
    ctx->pc = 0x1d003bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)464 << 16));
    // 0x1d003c0: 0x3c0501d0  lui         $a1, 0x1D0
    ctx->pc = 0x1d003c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)464 << 16));
    // 0x1d003c4: 0x2484d2d0  addiu       $a0, $a0, -0x2D30
    ctx->pc = 0x1d003c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955728));
    // 0x1d003c8: 0x24a513d0  addiu       $a1, $a1, 0x13D0
    ctx->pc = 0x1d003c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5072));
    // 0x1d003cc: 0xc73f4b6  jal         func_1CFD2D8
    ctx->pc = 0x1D003CCu;
    SET_GPR_U32(ctx, 31, 0x1D003D4u);
    ctx->pc = 0x1D003D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D003CCu;
    // 0x1d003d0: 0x2406045c  addiu       $a2, $zero, 0x45C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2D8u, 0x1D003CCu, 0x1D003D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D003D4u;
label_1d003d4:
    // 0x1d003d4: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1D003D4u;
    {
        const bool branch_taken_0x1d003d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D003D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D003D4u;
        // 0x1d003d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d003d4) {
            ctx->pc = 0x1D002E4u;
            return;
        }
    }
    ctx->pc = 0x1D003DCu;
    // 0x1d003dc: 0x0  nop
    ctx->pc = 0x1d003dcu;
    // NOP
    ctx->pc = 0x1d003e0u;
}
