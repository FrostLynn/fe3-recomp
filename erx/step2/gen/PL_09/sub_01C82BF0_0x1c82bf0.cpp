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

// Function: sub_01C82BF0
// Address: 0x1c82bf0 - 0x1c82e18
void sub_01C82BF0_0x1c82bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C82BF0_0x1c82bf0");
#endif

    switch (ctx->pc) {
        case 0x1c82c0cu: goto label_1c82c0c;
        case 0x1c82c24u: goto label_1c82c24;
        case 0x1c82c38u: goto label_1c82c38;
        case 0x1c82c40u: goto label_1c82c40;
        case 0x1c82c44u: goto label_1c82c44;
        case 0x1c82c84u: goto label_1c82c84;
        case 0x1c82c94u: goto label_1c82c94;
        case 0x1c82cd0u: goto label_1c82cd0;
        case 0x1c82ce4u: goto label_1c82ce4;
        case 0x1c82cf8u: goto label_1c82cf8;
        case 0x1c82d04u: goto label_1c82d04;
        case 0x1c82d18u: goto label_1c82d18;
        case 0x1c82d30u: goto label_1c82d30;
        case 0x1c82d3cu: goto label_1c82d3c;
        case 0x1c82d58u: goto label_1c82d58;
        case 0x1c82dccu: goto label_1c82dcc;
        case 0x1c82de8u: goto label_1c82de8;
        default: break;
    }

    ctx->pc = 0x1c82bf0u;

    // 0x1c82bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c82bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c82bf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c82bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c82bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c82bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82c00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c82c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c82c04: 0xc7203d0  jal         func_1C80F40
    ctx->pc = 0x1C82C04u;
    SET_GPR_U32(ctx, 31, 0x1C82C0Cu);
    ctx->pc = 0x1C82C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82C04u;
    // 0x1c82c08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F40u, 0x1C82C04u, 0x1C82C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C0Cu;
label_1c82c0c:
    // 0x1c82c0c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1c82c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c82c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82c14: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1c82c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c82c18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c82c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c82c1c: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C82C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C82C24u);
    ctx->pc = 0x1C82C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82C1Cu;
    // 0x1c82c20: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C82C1Cu, 0x1C82C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C24u;
label_1c82c24:
    // 0x1c82c24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c82c24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82c28: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C82C28u;
    {
        const bool branch_taken_0x1c82c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C82C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82C28u;
        // 0x1c82c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82c28) {
            ctx->pc = 0x1C82C54u;
            goto label_1c82c54;
        }
    }
    ctx->pc = 0x1C82C30u;
    // 0x1c82c30: 0xc7203ec  jal         func_1C80FB0
    ctx->pc = 0x1C82C30u;
    SET_GPR_U32(ctx, 31, 0x1C82C38u);
    ctx->pc = 0x1C80FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80FB0u, 0x1C82C30u, 0x1C82C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C38u;
label_1c82c38:
    // 0x1c82c38: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C82C38u;
    SET_GPR_U32(ctx, 31, 0x1C82C40u);
    ctx->pc = 0x1C82C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82C38u;
    // 0x1c82c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C82C38u, 0x1C82C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C40u;
label_1c82c40:
    // 0x1c82c40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c82c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c82c44:
    // 0x1c82c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82c48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c82c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82C4Cu;
        // 0x1c82c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82C54u;
label_1c82c54:
    // 0x1c82c54: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C82C54u;
    {
        const bool branch_taken_0x1c82c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82C54u;
        // 0x1c82c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82c54) {
            ctx->pc = 0x1C82C44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82c44;
        }
    }
    ctx->pc = 0x1C82C5Cu;
    // 0x1c82c5c: 0x0  nop
    ctx->pc = 0x1c82c5cu;
    // NOP
    // 0x1c82c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c82c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c82c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c82c68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c82c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c82c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c82c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c82c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c82c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82c74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c82c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c82c78: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c82c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c82c7c: 0xc7203d8  jal         func_1C80F60
    ctx->pc = 0x1C82C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C82C84u);
    ctx->pc = 0x1C82C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82C7Cu;
    // 0x1c82c80: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F60u, 0x1C82C7Cu, 0x1C82C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C84u;
label_1c82c84:
    // 0x1c82c84: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c82c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c82c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c82c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82c8c: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C82C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C82C94u);
    ctx->pc = 0x1C82C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82C8Cu;
    // 0x1c82c90: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C82C8Cu, 0x1C82C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C94u;
label_1c82c94:
    // 0x1c82c94: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c82c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c82c98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c82c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82c9c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c82c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c82ca0: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1c82ca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c82ca4: 0x8e2e0008  lw          $t6, 0x8($s1)
    ctx->pc = 0x1c82ca4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c82ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82cb0: 0x11cf000c  beq         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1C82CB0u;
    {
        const bool branch_taken_0x1c82cb0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C82CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82CB0u;
        // 0x1c82cb4: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82cb0) {
            ctx->pc = 0x1C82CE4u;
            goto label_1c82ce4;
        }
    }
    ctx->pc = 0x1C82CB8u;
    // 0x1c82cb8: 0x29cf001a  slti        $t7, $t6, 0x1A
    ctx->pc = 0x1c82cb8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1c82cbc: 0x11e00033  beqz        $t7, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C82CBCu;
    {
        const bool branch_taken_0x1c82cbc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82CBCu;
        // 0x1c82cc0: 0x240f0009  addiu       $t7, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82cbc) {
            ctx->pc = 0x1C82D8Cu;
            goto label_1c82d8c;
        }
    }
    ctx->pc = 0x1C82CC4u;
    // 0x1c82cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82ccc: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1c82cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1c82cd0:
    // 0x1c82cd0: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C82CD0u;
    {
        const bool branch_taken_0x1c82cd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C82CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82CD0u;
        // 0x1c82cd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82cd0) {
            ctx->pc = 0x1C82CE8u;
            goto label_1c82ce8;
        }
    }
    ctx->pc = 0x1C82CD8u;
    // 0x1c82cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82ce0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c82ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c82ce4:
    // 0x1c82ce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c82ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c82ce8:
    // 0x1c82ce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c82ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82cec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c82cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c82cf0: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C82CF0u;
    SET_GPR_U32(ctx, 31, 0x1C82CF8u);
    ctx->pc = 0x1C82CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82CF0u;
    // 0x1c82cf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C82CF0u, 0x1C82CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82CF8u;
label_1c82cf8:
    // 0x1c82cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82cfc: 0xc7203da  jal         func_1C80F68
    ctx->pc = 0x1C82CFCu;
    SET_GPR_U32(ctx, 31, 0x1C82D04u);
    ctx->pc = 0x1C82D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82CFCu;
    // 0x1c82d00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F68u, 0x1C82CFCu, 0x1C82D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82D04u;
label_1c82d04:
    // 0x1c82d04: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c82d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c82d08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c82d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c82d0c: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c82d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c82d10: 0xc7203dc  jal         func_1C80F70
    ctx->pc = 0x1C82D10u;
    SET_GPR_U32(ctx, 31, 0x1C82D18u);
    ctx->pc = 0x1C82D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82D10u;
    // 0x1c82d14: 0x240500be  addiu       $a1, $zero, 0xBE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F70u, 0x1C82D10u, 0x1C82D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82D18u;
label_1c82d18:
    // 0x1c82d18: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c82d18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82d1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c82d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c82d20: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c82d20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c82d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82d28: 0xc7203d0  jal         func_1C80F40
    ctx->pc = 0x1C82D28u;
    SET_GPR_U32(ctx, 31, 0x1C82D30u);
    ctx->pc = 0x1C82D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82D28u;
    // 0x1c82d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F40u, 0x1C82D28u, 0x1C82D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82D30u;
label_1c82d30:
    // 0x1c82d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82d34: 0xc7203de  jal         func_1C80F78
    ctx->pc = 0x1C82D34u;
    SET_GPR_U32(ctx, 31, 0x1C82D3Cu);
    ctx->pc = 0x1C82D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82D34u;
    // 0x1c82d38: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F78u, 0x1C82D34u, 0x1C82D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82D3Cu;
label_1c82d3c:
    // 0x1c82d3c: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c82d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c82d40: 0x8dee002c  lw          $t6, 0x2C($t7)
    ctx->pc = 0x1c82d40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c82d44: 0x8dcd0004  lw          $t5, 0x4($t6)
    ctx->pc = 0x1c82d44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1c82d48: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x1c82d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1c82d4c: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C82D4Cu;
    {
        const bool branch_taken_0x1c82d4c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1C82D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82D4Cu;
        // 0x1c82d50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82d4c) {
            ctx->pc = 0x1C82D78u;
            goto label_1c82d78;
        }
    }
    ctx->pc = 0x1C82D54u;
    // 0x1c82d54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1c82d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1c82d58:
    // 0x1c82d58: 0x0  nop
    ctx->pc = 0x1c82d58u;
    // NOP
    // 0x1c82d5c: 0x0  nop
    ctx->pc = 0x1c82d5cu;
    // NOP
    // 0x1c82d60: 0x0  nop
    ctx->pc = 0x1c82d60u;
    // NOP
    // 0x1c82d64: 0x0  nop
    ctx->pc = 0x1c82d64u;
    // NOP
    // 0x1c82d68: 0x0  nop
    ctx->pc = 0x1c82d68u;
    // NOP
    // 0x1c82d6c: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C82D6Cu;
    {
        const bool branch_taken_0x1c82d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c82d6c) {
            ctx->pc = 0x1C82D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C82D6Cu;
            // 0x1c82d70: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C82D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82d58;
        }
    }
    ctx->pc = 0x1C82D74u;
    // 0x1c82d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c82d78:
    // 0x1c82d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c82d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82d7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c82d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c82d80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c82d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c82d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82D84u;
        // 0x1c82d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82D8Cu;
label_1c82d8c:
    // 0x1c82d8c: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1c82d8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c82d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82d98: 0x11cfffd2  beq         $t6, $t7, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1C82D98u;
    {
        const bool branch_taken_0x1c82d98 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C82D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82D98u;
        // 0x1c82d9c: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82d98) {
            ctx->pc = 0x1C82CE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82ce4;
        }
    }
    ctx->pc = 0x1C82DA0u;
    // 0x1c82da0: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x1c82da0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c82da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82dac: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1C82DACu;
    {
        const bool branch_taken_0x1c82dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82DACu;
        // 0x1c82db0: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82dac) {
            ctx->pc = 0x1C82CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82cd0;
        }
    }
    ctx->pc = 0x1C82DB4u;
    // 0x1c82db4: 0x0  nop
    ctx->pc = 0x1c82db4u;
    // NOP
    // 0x1c82db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c82db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c82dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c82dc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c82dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c82dc4: 0xc7203e0  jal         func_1C80F80
    ctx->pc = 0x1C82DC4u;
    SET_GPR_U32(ctx, 31, 0x1C82DCCu);
    ctx->pc = 0x1C82DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82DC4u;
    // 0x1c82dc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F80u, 0x1C82DC4u, 0x1C82DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82DCCu;
label_1c82dcc:
    // 0x1c82dcc: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c82dccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c82dd0: 0x8dee002c  lw          $t6, 0x2C($t7)
    ctx->pc = 0x1c82dd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c82dd4: 0x8dcd0004  lw          $t5, 0x4($t6)
    ctx->pc = 0x1c82dd4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1c82dd8: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x1c82dd8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1c82ddc: 0x19a0000a  blez        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1C82DDCu;
    {
        const bool branch_taken_0x1c82ddc = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x1C82DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82DDCu;
        // 0x1c82de0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82ddc) {
            ctx->pc = 0x1C82E08u;
            goto label_1c82e08;
        }
    }
    ctx->pc = 0x1C82DE4u;
    // 0x1c82de4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1c82de4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_1c82de8:
    // 0x1c82de8: 0x0  nop
    ctx->pc = 0x1c82de8u;
    // NOP
    // 0x1c82dec: 0x0  nop
    ctx->pc = 0x1c82decu;
    // NOP
    // 0x1c82df0: 0x0  nop
    ctx->pc = 0x1c82df0u;
    // NOP
    // 0x1c82df4: 0x0  nop
    ctx->pc = 0x1c82df4u;
    // NOP
    // 0x1c82df8: 0x0  nop
    ctx->pc = 0x1c82df8u;
    // NOP
    // 0x1c82dfc: 0x55a0fffa  bnel        $t5, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C82DFCu;
    {
        const bool branch_taken_0x1c82dfc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c82dfc) {
            ctx->pc = 0x1C82E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C82DFCu;
            // 0x1c82e00: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C82DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82de8;
        }
    }
    ctx->pc = 0x1C82E04u;
    // 0x1c82e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c82e08:
    // 0x1c82e08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c82e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82E0Cu;
        // 0x1c82e10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82E14u;
    // 0x1c82e14: 0x0  nop
    ctx->pc = 0x1c82e14u;
    // NOP
    ctx->pc = 0x1c82e18u;
}
