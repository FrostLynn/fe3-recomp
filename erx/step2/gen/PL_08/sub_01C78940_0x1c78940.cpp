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

// Function: sub_01C78940
// Address: 0x1c78940 - 0x1c78a00
void sub_01C78940_0x1c78940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78940_0x1c78940");
#endif

    switch (ctx->pc) {
        case 0x1c78968u: goto label_1c78968;
        case 0x1c7897cu: goto label_1c7897c;
        case 0x1c78980u: goto label_1c78980;
        case 0x1c78998u: goto label_1c78998;
        case 0x1c789a0u: goto label_1c789a0;
        case 0x1c789d0u: goto label_1c789d0;
        default: break;
    }

    ctx->pc = 0x1c78940u;

    // 0x1c78940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c78944: 0x240f0126  addiu       $t7, $zero, 0x126
    ctx->pc = 0x1c78944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x1c78948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c78948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7894c: 0x108f0027  beq         $a0, $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C7894Cu;
    {
        const bool branch_taken_0x1c7894c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C78950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7894Cu;
        // 0x1c78950: 0x288f0127  slti        $t7, $a0, 0x127 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7894c) {
            ctx->pc = 0x1C789ECu;
            goto label_1c789ec;
        }
    }
    ctx->pc = 0x1C78954u;
    // 0x1c78954: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C78954u;
    {
        const bool branch_taken_0x1c78954 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78954u;
        // 0x1c78958: 0x240f0125  addiu       $t7, $zero, 0x125 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78954) {
            ctx->pc = 0x1C789A8u;
            goto label_1c789a8;
        }
    }
    ctx->pc = 0x1C7895Cu;
    // 0x1c7895c: 0x108f000b  beq         $a0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C7895Cu;
    {
        const bool branch_taken_0x1c7895c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C78960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7895Cu;
        // 0x1c78960: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7895c) {
            ctx->pc = 0x1C7898Cu;
            goto label_1c7898c;
        }
    }
    ctx->pc = 0x1C78964u;
    // 0x1c78964: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x1c78964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
label_1c78968:
    // 0x1c78968: 0x3c0501c8  lui         $a1, 0x1C8
    ctx->pc = 0x1c78968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)456 << 16));
    // 0x1c7896c: 0x248459b8  addiu       $a0, $a0, 0x59B8
    ctx->pc = 0x1c7896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22968));
    // 0x1c78970: 0x24a59810  addiu       $a1, $a1, -0x67F0
    ctx->pc = 0x1c78970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940688));
    // 0x1c78974: 0xc71d670  jal         func_1C759C0
    ctx->pc = 0x1C78974u;
    SET_GPR_U32(ctx, 31, 0x1C7897Cu);
    ctx->pc = 0x1C78978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78974u;
    // 0x1c78978: 0x240604e8  addiu       $a2, $zero, 0x4E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C759C0u, 0x1C78974u, 0x1C7897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7897Cu;
label_1c7897c:
    // 0x1c7897c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7897cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c78980:
    // 0x1c78980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c78980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78984: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78984u;
        // 0x1c78988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7898Cu;
label_1c7898c:
    // 0x1c7898c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c7898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78990: 0x3c0601c8  lui         $a2, 0x1C8
    ctx->pc = 0x1c78990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)456 << 16));
    // 0x1c78994: 0x24c6c810  addiu       $a2, $a2, -0x37F0
    ctx->pc = 0x1c78994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952976));
label_1c78998:
    // 0x1c78998: 0xc71dad8  jal         func_1C76B60
    ctx->pc = 0x1C78998u;
    SET_GPR_U32(ctx, 31, 0x1C789A0u);
    ctx->pc = 0x1C76B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C76B60u, 0x1C78998u, 0x1C789A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C789A0u;
label_1c789a0:
    // 0x1c789a0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C789A0u;
    {
        const bool branch_taken_0x1c789a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C789A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C789A0u;
        // 0x1c789a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c789a0) {
            ctx->pc = 0x1C78980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78980;
        }
    }
    ctx->pc = 0x1C789A8u;
label_1c789a8:
    // 0x1c789a8: 0x240f0127  addiu       $t7, $zero, 0x127
    ctx->pc = 0x1c789a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x1c789ac: 0x108f000a  beq         $a0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C789ACu;
    {
        const bool branch_taken_0x1c789ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C789B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C789ACu;
        // 0x1c789b0: 0x240f0128  addiu       $t7, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c789ac) {
            ctx->pc = 0x1C789D8u;
            goto label_1c789d8;
        }
    }
    ctx->pc = 0x1C789B4u;
    // 0x1c789b4: 0x148fffec  bne         $a0, $t7, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C789B4u;
    {
        const bool branch_taken_0x1c789b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C789B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C789B4u;
        // 0x1c789b8: 0x3c0401c7  lui         $a0, 0x1C7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)455 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c789b4) {
            ctx->pc = 0x1C78968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78968;
        }
    }
    ctx->pc = 0x1C789BCu;
    // 0x1c789bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c789bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c789c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c789c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c789c4: 0x3c0601c8  lui         $a2, 0x1C8
    ctx->pc = 0x1c789c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)456 << 16));
    // 0x1c789c8: 0xc71dc66  jal         func_1C77198
    ctx->pc = 0x1C789C8u;
    SET_GPR_U32(ctx, 31, 0x1C789D0u);
    ctx->pc = 0x1C789CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C789C8u;
    // 0x1c789cc: 0x24c6c990  addiu       $a2, $a2, -0x3670 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C77198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C77198u, 0x1C789C8u, 0x1C789D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C789D0u;
label_1c789d0:
    // 0x1c789d0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C789D0u;
    {
        const bool branch_taken_0x1c789d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C789D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C789D0u;
        // 0x1c789d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c789d0) {
            ctx->pc = 0x1C78980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78980;
        }
    }
    ctx->pc = 0x1C789D8u;
label_1c789d8:
    // 0x1c789d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c789d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c789dc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c789dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c789e0: 0x3c0601c8  lui         $a2, 0x1C8
    ctx->pc = 0x1c789e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)456 << 16));
    // 0x1c789e4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C789E4u;
    {
        const bool branch_taken_0x1c789e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C789E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C789E4u;
        // 0x1c789e8: 0x24c6c910  addiu       $a2, $a2, -0x36F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c789e4) {
            ctx->pc = 0x1C78998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78998;
        }
    }
    ctx->pc = 0x1C789ECu;
label_1c789ec:
    // 0x1c789ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c789ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c789f0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c789f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c789f4: 0x3c0601c8  lui         $a2, 0x1C8
    ctx->pc = 0x1c789f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)456 << 16));
    // 0x1c789f8: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C789F8u;
    {
        const bool branch_taken_0x1c789f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C789FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C789F8u;
        // 0x1c789fc: 0x24c6c890  addiu       $a2, $a2, -0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c789f8) {
            ctx->pc = 0x1C78998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78998;
        }
    }
    ctx->pc = 0x1C78A00u;
}
