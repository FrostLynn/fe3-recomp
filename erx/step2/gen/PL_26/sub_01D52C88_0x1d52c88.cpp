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

// Function: sub_01D52C88
// Address: 0x1d52c88 - 0x1d52dc0
void sub_01D52C88_0x1d52c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D52C88_0x1d52c88");
#endif

    switch (ctx->pc) {
        case 0x1d52ca4u: goto label_1d52ca4;
        case 0x1d52cacu: goto label_1d52cac;
        case 0x1d52cc0u: goto label_1d52cc0;
        case 0x1d52cc4u: goto label_1d52cc4;
        case 0x1d52d00u: goto label_1d52d00;
        case 0x1d52d60u: goto label_1d52d60;
        case 0x1d52d6cu: goto label_1d52d6c;
        case 0x1d52d78u: goto label_1d52d78;
        case 0x1d52d8cu: goto label_1d52d8c;
        case 0x1d52da4u: goto label_1d52da4;
        default: break;
    }

    ctx->pc = 0x1d52c88u;

    // 0x1d52c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d52c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d52c8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d52c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d52c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d52c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d52c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d52c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d52c9c: 0xc7543d0  jal         func_1D50F40
    ctx->pc = 0x1D52C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D52CA4u);
    ctx->pc = 0x1D52CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C9Cu;
    // 0x1d52ca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F40u, 0x1D52C9Cu, 0x1D52CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52CA4u;
label_1d52ca4:
    // 0x1d52ca4: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D52CA4u;
    SET_GPR_U32(ctx, 31, 0x1D52CACu);
    ctx->pc = 0x1D52CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52CA4u;
    // 0x1d52ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D52CA4u, 0x1D52CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52CACu;
label_1d52cac:
    // 0x1d52cac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d52cacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52cb0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D52CB0u;
    {
        const bool branch_taken_0x1d52cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D52CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52CB0u;
        // 0x1d52cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52cb0) {
            ctx->pc = 0x1D52CD4u;
            goto label_1d52cd4;
        }
    }
    ctx->pc = 0x1D52CB8u;
    // 0x1d52cb8: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D52CB8u;
    SET_GPR_U32(ctx, 31, 0x1D52CC0u);
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D52CB8u, 0x1D52CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52CC0u;
label_1d52cc0:
    // 0x1d52cc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d52cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d52cc4:
    // 0x1d52cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52cc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d52cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D52CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52CCCu;
        // 0x1d52cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D52CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D52CD4u;
label_1d52cd4:
    // 0x1d52cd4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D52CD4u;
    {
        const bool branch_taken_0x1d52cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52CD4u;
        // 0x1d52cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52cd4) {
            ctx->pc = 0x1D52CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52cc4;
        }
    }
    ctx->pc = 0x1D52CDCu;
    // 0x1d52cdc: 0x0  nop
    ctx->pc = 0x1d52cdcu;
    // NOP
    // 0x1d52ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d52ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d52ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d52ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d52ce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d52ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d52cec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d52cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d52cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d52cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52cf4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d52cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d52cf8: 0xc7543d8  jal         func_1D50F60
    ctx->pc = 0x1D52CF8u;
    SET_GPR_U32(ctx, 31, 0x1D52D00u);
    ctx->pc = 0x1D52CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52CF8u;
    // 0x1d52cfc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F60u, 0x1D52CF8u, 0x1D52D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52D00u;
label_1d52d00:
    // 0x1d52d00: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d52d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d52d04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d52d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d08: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d52d08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d52d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d14: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1d52d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1d52d18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d52d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52d1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d52d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d20: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d52d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52d24: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1d52d24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d52d28: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1D52D28u;
    {
        const bool branch_taken_0x1d52d28 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D52D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52D28u;
        // 0x1d52d2c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52d28) {
            ctx->pc = 0x1D52D58u;
            goto label_1d52d58;
        }
    }
    ctx->pc = 0x1D52D30u;
    // 0x1d52d30: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x1d52d30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d52d34: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D52D34u;
    {
        const bool branch_taken_0x1d52d34 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D52D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52D34u;
        // 0x1d52d38: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52d34) {
            ctx->pc = 0x1D52D58u;
            goto label_1d52d58;
        }
    }
    ctx->pc = 0x1D52D3Cu;
    // 0x1d52d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d44: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x1d52d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1d52d48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d52d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52d4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d52d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d50: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d52d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52d54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d52d54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d52d58:
    // 0x1d52d58: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D52D58u;
    SET_GPR_U32(ctx, 31, 0x1D52D60u);
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D52D58u, 0x1D52D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52D60u;
label_1d52d60:
    // 0x1d52d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d64: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D52D64u;
    SET_GPR_U32(ctx, 31, 0x1D52D6Cu);
    ctx->pc = 0x1D52D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52D64u;
    // 0x1d52d68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D52D64u, 0x1D52D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52D6Cu;
label_1d52d6c:
    // 0x1d52d6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d52d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d52d70: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52D70u;
    SET_GPR_U32(ctx, 31, 0x1D52D78u);
    ctx->pc = 0x1D52D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52D70u;
    // 0x1d52d74: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52D70u, 0x1D52D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52D78u;
label_1d52d78:
    // 0x1d52d78: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d52d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d52d7c: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d52d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d52d80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d52d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52d84: 0xc7543dc  jal         func_1D50F70
    ctx->pc = 0x1D52D84u;
    SET_GPR_U32(ctx, 31, 0x1D52D8Cu);
    ctx->pc = 0x1D52D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52D84u;
    // 0x1d52d88: 0x240500f6  addiu       $a1, $zero, 0xF6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F70u, 0x1D52D84u, 0x1D52D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52D8Cu;
label_1d52d8c:
    // 0x1d52d8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d52d8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52d90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d52d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d52d94: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d52d94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d52d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d9c: 0xc7543d0  jal         func_1D50F40
    ctx->pc = 0x1D52D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D52DA4u);
    ctx->pc = 0x1D52DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52D9Cu;
    // 0x1d52da0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F40u, 0x1D52D9Cu, 0x1D52DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52DA4u;
label_1d52da4:
    // 0x1d52da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52da8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d52da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52db0: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x1d52db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1d52db4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d52db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d52db8: 0x87543de  j           func_1D50F78
    ctx->pc = 0x1D52DB8u;
    ctx->pc = 0x1D52DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52DB8u;
    // 0x1d52dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F78u;
    sub_01D50F78_0x1d50f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D52DC0u;
}
