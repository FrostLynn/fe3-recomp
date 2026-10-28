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

// Function: sub_01CF1F38
// Address: 0x1cf1f38 - 0x1cf1ff8
void sub_01CF1F38_0x1cf1f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1F38_0x1cf1f38");
#endif

    switch (ctx->pc) {
        case 0x1cf1f78u: goto label_1cf1f78;
        case 0x1cf1f94u: goto label_1cf1f94;
        case 0x1cf1f98u: goto label_1cf1f98;
        case 0x1cf1fecu: goto label_1cf1fec;
        default: break;
    }

    ctx->pc = 0x1cf1f38u;

    // 0x1cf1f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf1f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf1f3c: 0x240f015a  addiu       $t7, $zero, 0x15A
    ctx->pc = 0x1cf1f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
    // 0x1cf1f40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1f44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf1f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf1f48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf1f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf1f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1f50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cf1f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cf1f54: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1cf1f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf1f58: 0x8c8e03a4  lw          $t6, 0x3A4($a0)
    ctx->pc = 0x1cf1f58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x1cf1f5c: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF1F5Cu;
    {
        const bool branch_taken_0x1cf1f5c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CF1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1F5Cu;
        // 0x1cf1f60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1f5c) {
            ctx->pc = 0x1CF1F74u;
            goto label_1cf1f74;
        }
    }
    ctx->pc = 0x1CF1F64u;
    // 0x1cf1f64: 0x240f015b  addiu       $t7, $zero, 0x15B
    ctx->pc = 0x1cf1f64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x1cf1f68: 0x15cf001b  bne         $t6, $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CF1F68u;
    {
        const bool branch_taken_0x1cf1f68 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1F68u;
        // 0x1cf1f6c: 0x3c0401cf  lui         $a0, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1f68) {
            ctx->pc = 0x1CF1FD8u;
            goto label_1cf1fd8;
        }
    }
    ctx->pc = 0x1CF1F70u;
    // 0x1cf1f70: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cf1f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf1f74:
    // 0x1cf1f74: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1cf1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1cf1f78:
    // 0x1cf1f78: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1cf1f78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1f7c: 0x108e0012  beq         $a0, $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CF1F7Cu;
    {
        const bool branch_taken_0x1cf1f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        ctx->pc = 0x1CF1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1F7Cu;
        // 0x1cf1f80: 0x288f0002  slti        $t7, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1f7c) {
            ctx->pc = 0x1CF1FC8u;
            goto label_1cf1fc8;
        }
    }
    ctx->pc = 0x1CF1F84u;
    // 0x1cf1f84: 0x51e0000c  beql        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CF1F84u;
    {
        const bool branch_taken_0x1cf1f84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1f84) {
            ctx->pc = 0x1CF1F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF1F84u;
            // 0x1cf1f88: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1FB8u;
            goto label_1cf1fb8;
        }
    }
    ctx->pc = 0x1CF1F8Cu;
    // 0x1cf1f8c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF1F8Cu;
    {
        const bool branch_taken_0x1cf1f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1f8c) {
            ctx->pc = 0x1CF1F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF1F8Cu;
            // 0x1cf1f90: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1FB0u;
            goto label_1cf1fb0;
        }
    }
    ctx->pc = 0x1CF1F94u;
label_1cf1f94:
    // 0x1cf1f94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cf1f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1f98:
    // 0x1cf1f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf1f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1fa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf1fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf1fa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cf1fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf1fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1FA8u;
        // 0x1cf1fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1FB0u;
label_1cf1fb0:
    // 0x1cf1fb0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CF1FB0u;
    {
        const bool branch_taken_0x1cf1fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1FB0u;
        // 0x1cf1fb4: 0x1d2880a  movz        $s1, $t6, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1fb0) {
            ctx->pc = 0x1CF1F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf1f94;
        }
    }
    ctx->pc = 0x1CF1FB8u;
label_1cf1fb8:
    // 0x1cf1fb8: 0x508ffff6  beql        $a0, $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CF1FB8u;
    {
        const bool branch_taken_0x1cf1fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cf1fb8) {
            ctx->pc = 0x1CF1FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF1FB8u;
            // 0x1cf1fbc: 0x12882b  sltu        $s1, $zero, $s2 (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf1f94;
        }
    }
    ctx->pc = 0x1CF1FC0u;
    // 0x1cf1fc0: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CF1FC0u;
    {
        const bool branch_taken_0x1cf1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1FC0u;
        // 0x1cf1fc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1fc0) {
            ctx->pc = 0x1CF1F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf1f98;
        }
    }
    ctx->pc = 0x1CF1FC8u;
label_1cf1fc8:
    // 0x1cf1fc8: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cf1fc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf1fcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf1fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1fd0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CF1FD0u;
    {
        const bool branch_taken_0x1cf1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1FD0u;
        // 0x1cf1fd4: 0x1f2880a  movz        $s1, $t7, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1fd0) {
            ctx->pc = 0x1CF1F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf1f94;
        }
    }
    ctx->pc = 0x1CF1FD8u;
label_1cf1fd8:
    // 0x1cf1fd8: 0x3c0501cf  lui         $a1, 0x1CF
    ctx->pc = 0x1cf1fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)463 << 16));
    // 0x1cf1fdc: 0x2484f5d0  addiu       $a0, $a0, -0xA30
    ctx->pc = 0x1cf1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964688));
    // 0x1cf1fe0: 0x24a53040  addiu       $a1, $a1, 0x3040
    ctx->pc = 0x1cf1fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12352));
    // 0x1cf1fe4: 0xc73bd76  jal         func_1CEF5D8
    ctx->pc = 0x1CF1FE4u;
    SET_GPR_U32(ctx, 31, 0x1CF1FECu);
    ctx->pc = 0x1CF1FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1FE4u;
    // 0x1cf1fe8: 0x240602d0  addiu       $a2, $zero, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5D8u, 0x1CF1FE4u, 0x1CF1FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1FECu;
label_1cf1fec:
    // 0x1cf1fec: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1CF1FECu;
    {
        const bool branch_taken_0x1cf1fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1FECu;
        // 0x1cf1ff0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1fec) {
            ctx->pc = 0x1CF1F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf1f78;
        }
    }
    ctx->pc = 0x1CF1FF4u;
    // 0x1cf1ff4: 0x0  nop
    ctx->pc = 0x1cf1ff4u;
    // NOP
    ctx->pc = 0x1cf1ff8u;
}
