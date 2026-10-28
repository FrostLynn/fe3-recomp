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

// Function: sub_01D3DD10
// Address: 0x1d3dd10 - 0x1d3de20
void sub_01D3DD10_0x1d3dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3DD10_0x1d3dd10");
#endif

    switch (ctx->pc) {
        case 0x1d3dd30u: goto label_1d3dd30;
        case 0x1d3dd44u: goto label_1d3dd44;
        case 0x1d3dd48u: goto label_1d3dd48;
        case 0x1d3dd64u: goto label_1d3dd64;
        case 0x1d3dd74u: goto label_1d3dd74;
        case 0x1d3ddc0u: goto label_1d3ddc0;
        case 0x1d3ddfcu: goto label_1d3ddfc;
        case 0x1d3de08u: goto label_1d3de08;
        default: break;
    }

    ctx->pc = 0x1d3dd10u;

    // 0x1d3dd10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3dd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3dd14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3dd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3dd18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3dd1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3dd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3dd20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3dd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dd24: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3dd28: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DD28u;
    SET_GPR_U32(ctx, 31, 0x1D3DD30u);
    ctx->pc = 0x1D3DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DD28u;
    // 0x1d3dd2c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DD28u, 0x1D3DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DD30u;
label_1d3dd30:
    // 0x1d3dd30: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d3dd30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d3dd34: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3DD34u;
    {
        const bool branch_taken_0x1d3dd34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD34u;
        // 0x1d3dd38: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dd34) {
            ctx->pc = 0x1D3DD80u;
            goto label_1d3dd80;
        }
    }
    ctx->pc = 0x1D3DD3Cu;
    // 0x1d3dd3c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3DD3Cu;
    {
        const bool branch_taken_0x1d3dd3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d3dd3c) {
            ctx->pc = 0x1D3DD5Cu;
            goto label_1d3dd5c;
        }
    }
    ctx->pc = 0x1D3DD44u;
label_1d3dd44:
    // 0x1d3dd44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3dd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3dd48:
    // 0x1d3dd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3dd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3dd4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3dd4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3dd50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3dd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3dd54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD54u;
        // 0x1d3dd58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DD5Cu;
label_1d3dd5c:
    // 0x1d3dd5c: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3DD5Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DD64u);
    ctx->pc = 0x1D3DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DD5Cu;
    // 0x1d3dd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3DD5Cu, 0x1D3DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DD64u;
label_1d3dd64:
    // 0x1d3dd64: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3DD64u;
    {
        const bool branch_taken_0x1d3dd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D3DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD64u;
        // 0x1d3dd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dd64) {
            ctx->pc = 0x1D3DD44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dd44;
        }
    }
    ctx->pc = 0x1D3DD6Cu;
    // 0x1d3dd6c: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3DD6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DD74u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3DD6Cu, 0x1D3DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DD74u;
label_1d3dd74:
    // 0x1d3dd74: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D3DD74u;
    {
        const bool branch_taken_0x1d3dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD74u;
        // 0x1d3dd78: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dd74) {
            ctx->pc = 0x1D3DD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dd48;
        }
    }
    ctx->pc = 0x1D3DD7Cu;
    // 0x1d3dd7c: 0x0  nop
    ctx->pc = 0x1d3dd7cu;
    // NOP
label_1d3dd80:
    // 0x1d3dd80: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d3dd80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d3dd84: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D3DD84u;
    {
        const bool branch_taken_0x1d3dd84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD84u;
        // 0x1d3dd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dd84) {
            ctx->pc = 0x1D3DD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dd48;
        }
    }
    ctx->pc = 0x1D3DD8Cu;
    // 0x1d3dd8c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d3dd8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d3dd90: 0x3c0e01d4  lui         $t6, 0x1D4
    ctx->pc = 0x1d3dd90u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)468 << 16));
    // 0x1d3dd94: 0x25ceffe0  addiu       $t6, $t6, -0x20
    ctx->pc = 0x1d3dd94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967264));
    // 0x1d3dd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3dd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dd9c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d3dd9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d3dda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dda4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d3dda4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d3dda8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3dda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ddac: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d3ddacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3ddb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3ddb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ddb4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3ddb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ddb8: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3DDB8u;
    SET_GPR_U32(ctx, 31, 0x1D3DDC0u);
    ctx->pc = 0x1D3DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DDB8u;
    // 0x1d3ddbc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3DDB8u, 0x1D3DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DDC0u;
label_1d3ddc0:
    // 0x1d3ddc0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3ddc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ddc4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D3DDC4u;
    {
        const bool branch_taken_0x1d3ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DDC4u;
        // 0x1d3ddc8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ddc4) {
            ctx->pc = 0x1D3DD44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dd44;
        }
    }
    ctx->pc = 0x1D3DDCCu;
    // 0x1d3ddcc: 0x0  nop
    ctx->pc = 0x1d3ddccu;
    // NOP
    // 0x1d3ddd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3ddd4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3ddd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3ddd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3dddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3dddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dde0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3dde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3dde4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3dde4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dde8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3dde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ddec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3ddecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ddf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3ddf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ddf4: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3DDF4u;
    SET_GPR_U32(ctx, 31, 0x1D3DDFCu);
    ctx->pc = 0x1D3DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DDF4u;
    // 0x1d3ddf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3DDF4u, 0x1D3DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DDFCu;
label_1d3ddfc:
    // 0x1d3ddfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3ddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3de00: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3DE00u;
    SET_GPR_U32(ctx, 31, 0x1D3DE08u);
    ctx->pc = 0x1D3DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DE00u;
    // 0x1d3de04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3DE00u, 0x1D3DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DE08u;
label_1d3de08:
    // 0x1d3de08: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d3de08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d3de0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3de0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3de10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3de10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3de14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DE14u;
        // 0x1d3de18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DE1Cu;
    // 0x1d3de1c: 0x0  nop
    ctx->pc = 0x1d3de1cu;
    // NOP
    ctx->pc = 0x1d3de20u;
}
