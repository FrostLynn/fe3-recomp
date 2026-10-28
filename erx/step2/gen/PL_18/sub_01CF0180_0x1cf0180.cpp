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

// Function: sub_01CF0180
// Address: 0x1cf0180 - 0x1cf0210
void sub_01CF0180_0x1cf0180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0180_0x1cf0180");
#endif

    switch (ctx->pc) {
        case 0x1cf0194u: goto label_1cf0194;
        case 0x1cf01a8u: goto label_1cf01a8;
        case 0x1cf01acu: goto label_1cf01ac;
        case 0x1cf01f4u: goto label_1cf01f4;
        default: break;
    }

    ctx->pc = 0x1cf0180u;

    // 0x1cf0180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf0180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf0184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf0184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf0188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf018c: 0xc73bd54  jal         func_1CEF550
    ctx->pc = 0x1CF018Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0194u);
    ctx->pc = 0x1CF0190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF018Cu;
    // 0x1cf0190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF550u, 0x1CF018Cu, 0x1CF0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0194u;
label_1cf0194:
    // 0x1cf0194: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf0194u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0198: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF0198u;
    {
        const bool branch_taken_0x1cf0198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0198u;
        // 0x1cf019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0198) {
            ctx->pc = 0x1CF01BCu;
            goto label_1cf01bc;
        }
    }
    ctx->pc = 0x1CF01A0u;
    // 0x1cf01a0: 0xc73bd56  jal         func_1CEF558
    ctx->pc = 0x1CF01A0u;
    SET_GPR_U32(ctx, 31, 0x1CF01A8u);
    ctx->pc = 0x1CEF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF558u, 0x1CF01A0u, 0x1CF01A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF01A8u;
label_1cf01a8:
    // 0x1cf01a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cf01a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cf01ac:
    // 0x1cf01ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf01acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf01b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf01b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf01b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF01B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF01B4u;
        // 0x1cf01b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF01B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF01BCu;
label_1cf01bc:
    // 0x1cf01bc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CF01BCu;
    {
        const bool branch_taken_0x1cf01bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF01BCu;
        // 0x1cf01c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf01bc) {
            ctx->pc = 0x1CF01ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf01ac;
        }
    }
    ctx->pc = 0x1CF01C4u;
    // 0x1cf01c4: 0x0  nop
    ctx->pc = 0x1cf01c4u;
    // NOP
    // 0x1cf01c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf01c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf01cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf01ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf01d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf01d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf01d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cf01d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf01d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf01d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf01dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf01dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf01e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf01e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf01e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf01e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf01e8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf01e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf01ec: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF01ECu;
    SET_GPR_U32(ctx, 31, 0x1CF01F4u);
    ctx->pc = 0x1CF01F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF01ECu;
    // 0x1cf01f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF01ECu, 0x1CF01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF01F4u;
label_1cf01f4:
    // 0x1cf01f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf01f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf01f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf01f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf01fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf01fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0200: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cf0200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf0204: 0x873bd5c  j           func_1CEF570
    ctx->pc = 0x1CF0204u;
    ctx->pc = 0x1CF0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0204u;
    // 0x1cf0208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF570u;
    sub_01CEF570_0x1cef570(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF020Cu;
    // 0x1cf020c: 0x0  nop
    ctx->pc = 0x1cf020cu;
    // NOP
    ctx->pc = 0x1cf0210u;
}
